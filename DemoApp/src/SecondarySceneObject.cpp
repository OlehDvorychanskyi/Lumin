#include "SecondarySceneObject.h"

SecondarySceneObject::SecondarySceneObject()
    : rectangle({100, 100})
{
    rectangle.setFillColor(sf::Color::Red);
}

void SecondarySceneObject::processEvent(const sf::Event &event)
{
    if (event.type == sf::Event::KeyPressed)
    {
        if (event.key.code == sf::Keyboard::Space)
        {
            Lumin::SceneManager::setActive("main");
        }
    }
}

void SecondarySceneObject::update(float deltaTime)
{

}

void SecondarySceneObject::render(sf::RenderWindow &window)
{
    window.draw(rectangle);
}