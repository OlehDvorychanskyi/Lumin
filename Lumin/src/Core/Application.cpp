#include "Application.h"

#include <Core/Initializer.h>
#include <Graphics/WindowManager.h>
#include <Scene/SceneManager.h>
#include <Core/Assert.h>

namespace Lumin
{   
    Application* Application::m_instance = nullptr;

    Application::Application()
    {
        Lumin::Initializer::init();

        m_instance = this;
    }

    void Application::run()
    {
        sf::Clock clock;
        while(WindowManager::window->isOpen())
        {
            while (WindowManager::window->pollEvent(m_event))
            {
                // manage window close event (temp decision)
                if (m_event.type == sf::Event::Closed)
                    WindowManager::window->close();
                // -----------------------------------------

                SceneManager::active->processEvent(m_event);
            }
            
            sf::Time deltaTime = clock.restart();
            SceneManager::active->update(deltaTime.asSeconds());

            WindowManager::window->clear();
            SceneManager::active->render(*WindowManager::window);
            WindowManager::window->display();
        }
    }

    void Application::close()
    {
        WindowManager::shutdown();
    }
    
    Application::~Application()
    {
        Lumin::Initializer::shutdown();
    }
}