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
            SceneManager::active->processEvent();
            SceneManager::active->update();
            SceneManager::active->render();
        }
    }
    
    Application::~Application()
    {
        Lumin::Initializer::shutdown();
    }
}