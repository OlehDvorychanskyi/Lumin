#include "Initializer.h"
#include <Lumin.h>

namespace Lumin
{
    bool Initializer::isInitialize = false;

    void Initializer::init()
    {   
        if (!isInitialize)
        {
            WindowManager::init({800, 600}, "Lumin");
            isInitialize = true;
        }
        else
        {
            // error "Engine already initialized"
        }
    }
    
    void Initializer::shutdown()
    {
        WindowManager::shutdown();
        isInitialize = false;
    }
}