#include "SecondaryScene.h"

SecondaryScene::SecondaryScene()
    : rectangle({100.f, 100.f})
{
    rectangle.setFillColor(sf::Color::Green);
}

void SecondaryScene::processEvent(const sf::Event &event)
{
    // if (event.type == sf::Event::Closed)
    //     Lumin::WindowManager::window->close();

    if (event.type == sf::Event::KeyPressed)
    {
        if (event.key.code == sf::Keyboard::Space)
        {
            Lumin::SceneManager::active = Lumin::SceneManager::scenes->get("main");
        }
    }
}

void SecondaryScene::update(float deltaTime) 
{

}

void SecondaryScene::render(sf::RenderWindow &window)
{
    window.clear(sf::Color::Red);
    window.draw(rectangle);
    window.display();
}