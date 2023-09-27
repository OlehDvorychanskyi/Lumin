#include "Initializer.h"

#include <Graphics/WindowManager.h>
#include <Scene/SceneManager.h>
#include <Logging/Logger.h>

namespace Lumin
{
    void Initializer::init()
    {   
        WindowManager::init({800, 600}, "Lumin");
        SceneManager::init();
        LUMIN_CORE_LOG("Engine initialized successfully");
    }
    
    void Initializer::shutdown()
    {
        WindowManager::shutdown();
        LUMIN_CORE_LOG("Engine shutdown successfully");
    }
}