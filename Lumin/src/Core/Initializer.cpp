#include "Initializer.h"

#include <Graphics/WindowManager.h>
#include <Utility/EventManager.h>
#include <Utility/SceneManager.h>
#include <Logging/Logger.h>

namespace Lumin
{
    bool Initializer::isInitialize = false;

    void Initializer::init()
    {   
        if (isInitialize == false)
        {
            WindowManager::init({800, 600}, "Lumin");
            EventManager::init();
            SceneManager::init();
            isInitialize = true;
            LUMIN_CORE_LOG("Engine initialized successfully");
        }
        else
        {
            LUMIN_CORE_ERROR("Engine already initialized");
        }
    }
    
    void Initializer::shutdown()
    {
        if (isInitialize == false)
        {
            LUMIN_CORE_ERROR("Failed to shut down. Engine already initialized");
        }
        else
        {
            WindowManager::shutdown();
            EventManager::shutdown();
            isInitialize = false;
            LUMIN_CORE_LOG("Engine shutdown successfully");
        }
    }
}