#include "Application.h"

#include <Core/Initializer.h>
#include <Graphics/WindowManager.h>
#include <Utility/EventManager.h>
#include <Scene/SceneManager.h>

namespace Lumin
{
    Application::Application()
    {
        Lumin::Initializer::init();
    }

    void Application::run()
    {
        sf::Clock clock;
        while(WindowManager::window->isOpen())
        {
            while (WindowManager::window->pollEvent(*EventManager::event))
            {
                // manage window close event (temp decision)
                if (EventManager::event->type == sf::Event::Closed)
                    WindowManager::window->close();
                // -----------------------------------------

                SceneManager::active->processEvent(*EventManager::event);
            }
            
            sf::Time deltaTime = clock.restart();
            SceneManager::active->update(deltaTime.asSeconds());

            WindowManager::window->clear();
            SceneManager::active->render(*WindowManager::window);
            WindowManager::window->display();
        }
    }
    
    Application::~Application()
    {
        Lumin::Initializer::shutdown();
    }
}