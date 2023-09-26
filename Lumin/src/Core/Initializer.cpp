#include "Initializer.h"

#include <Graphics/WindowManager.h>
#include <Utility/EventManager.h>
#include <Utility/SceneManager.h>
#include <Logging/Logger.h>

namespace Lumin
{
    void Initializer::init()
    {   
        WindowManager::init({800, 600}, "Lumin");
        EventManager::init();
        SceneManager::init();
        LUMIN_CORE_LOG("Engine initialized successfully");
    }
    
    void Initializer::shutdown()
    {
        WindowManager::shutdown();
        EventManager::shutdown();
        LUMIN_CORE_LOG("Engine shutdown successfully");
    }
}