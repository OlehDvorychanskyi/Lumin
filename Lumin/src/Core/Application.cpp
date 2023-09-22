#include "Application.h"

#include <Core/Initializer.h>
#include <Graphics/WindowManager.h>
#include <Utility/EventManager.h>

namespace Lumin
{
    Application::Application()
    {
        Lumin::Initializer::init();
    }

    void Application::run()
    {
        while(WindowManager::window->isOpen())
        {
            while (WindowManager::window->pollEvent(*EventManager::event))
            {
                if (EventManager::event->type == sf::Event::Closed)
                {
                    WindowManager::window->close();
                }
            }
            
            WindowManager::window->clear();
            WindowManager::window->display();
        }
    }
    
    Application::~Application()
    {
        Lumin::Initializer::shutdown();
    }
}