#include "Initializer.h"

#include <Scene/SceneManager.h>
#include <Graphics/ResourceHolders.h>
#include <Logging/Logger.h>

namespace Lumin
{
    void Initializer::init()
    {   
        SceneManager::init();
        ResourceHolders::init();
        LUMIN_CORE_LOG("Engine initialized successfully");
    }
    
    void Initializer::shutdown()
    {
        ResourceHolders::shutdown();
        LUMIN_CORE_LOG("Engine shutdown successfully");
    }
}