#include "Application.h"

#include <Core/Initializer.h>
#include <Scene/SceneManager.h>
#include <Core/Assert.h>

namespace Lumin
{   
    Application* Application::m_instance = nullptr;

    Application::Application()
    {
        m_window = std::make_unique<sf::RenderWindow>(sf::VideoMode(800, 600), "Lumin");

        m_instance = this;
    }

    void Application::run()
    {
        sf::Clock clock;
        while(m_window->isOpen())
        {
            while (m_window->pollEvent(m_event))
            {
                // manage window close event (temp decision)
                if (m_event.type == sf::Event::Closed)
                    m_window->close();
                // -----------------------------------------

                SceneManager::active->processEvent(m_event);
            }
            
            sf::Time deltaTime = clock.restart();
            SceneManager::active->update(deltaTime.asSeconds());

            m_window->clear();
            SceneManager::active->render(*m_window);
            m_window->display();
        }
    }

    void Application::close()
    {
        m_window->close();
    }
}