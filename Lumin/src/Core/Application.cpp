#include "Application.h"

#include <Core/Initializer.h>
#include <Graphics/WindowManager.h>
#include <Utility/EventManager.h>
#include <Utility/SceneManager.h>

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
                SceneManager::active->processEvent(*EventManager::event);
            }
            SceneManager::active->update();
            SceneManager::active->render();
        }
    }
    
    Application::~Application()
    {
        Lumin::Initializer::shutdown();
    }
}