#pragma once 

extern Lumin::Application* Lumin::createApplication();

int main()
{
    Lumin::Application *app = Lumin::createApplication();
    app->run();
    delete app;
}