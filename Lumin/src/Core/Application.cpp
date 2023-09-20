#include "Application.h"
#include <Lumin.h>

namespace Lumin
{
    Application::Application()
    {
        Lumin::Initializer::init();
    }
    
    Application::~Application()
    {
        Lumin::Initializer::shutdown();
    }
}