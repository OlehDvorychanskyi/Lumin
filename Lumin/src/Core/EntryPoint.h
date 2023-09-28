#pragma once 
#include "Application.h"
#include "Initializer.h"

extern Lumin::Application* Lumin::createApplication();

int main()
{
    Lumin::Initializer::init();

    Lumin::Application *app = Lumin::createApplication();
    app->run();
    delete app;
    
    Lumin::Initializer::shutdown();
}