#include "Initializer.h"

#include <Scene/SceneManager.h>
#include <Logging/Logger.h>

namespace Lumin
{
    void Initializer::init()
    {   
        SceneManager::init();
        LUMIN_CORE_LOG("Engine initialized successfully");
    }
    
    void Initializer::shutdown()
    {
        LUMIN_CORE_LOG("Engine shutdown successfully");
    }
}