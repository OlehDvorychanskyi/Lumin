#include "SecondaryScene.h"

SecondaryScene::SecondaryScene()
    : rectangle({100.f, 100.f})
{
    rectangle.setFillColor(sf::Color::Green);
}

void SecondaryScene::processEvent()
{
    while (Lumin::WindowManager::window->pollEvent(*Lumin::EventManager::event))
    {
        if (Lumin::EventManager::event->type == sf::Event::Closed)
            Lumin::WindowManager::window->close();
        
        if (Lumin::EventManager::event->type == sf::Event::KeyPressed)
        {
            if (Lumin::EventManager::event->key.code == sf::Keyboard::Space)
            {
                Lumin::SceneManager::active = Lumin::SceneManager::scenes->get("main");
            }
        }
    }
}

void SecondaryScene::update() 
{

}

void SecondaryScene::render()
{
    Lumin::WindowManager::window->clear(sf::Color::Red);
    Lumin::WindowManager::window->draw(rectangle);
    Lumin::WindowManager::window->display();
}