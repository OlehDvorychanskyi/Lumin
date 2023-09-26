#include "MainScene.h"

MainScene::MainScene()
    : rectangle({100.f, 100.f})
{
    rectangle.setFillColor(sf::Color::Red);
}

void MainScene::processEvent(const sf::Event &event)
{
    if (event.type == sf::Event::Closed)
        Lumin::WindowManager::window->close();

    if (event.type == sf::Event::KeyPressed)
    {
        if (event.key.code == sf::Keyboard::Space)
        {
            Lumin::SceneManager::active = Lumin::SceneManager::scenes->get("secondary");
        }
    }
}

void MainScene::update() 
{

}

void MainScene::render()
{
    Lumin::WindowManager::window->clear(sf::Color::Green);
    Lumin::WindowManager::window->draw(rectangle);
    Lumin::WindowManager::window->display();
}