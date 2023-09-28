#include "MainSceneObject.h"

MainSceneObject::MainSceneObject()
    : rectangle({100, 100})
{
    rectangle.setFillColor(sf::Color::Blue);

    sprite.setTexture(Lumin::ResourceHolders::getTextureHolder().get("textureID"));
    sprite.setPosition({100.f, 100.f});
}

void MainSceneObject::processEvent(const sf::Event &event)
{
    if (event.type == sf::Event::KeyPressed)
    {
        if (event.key.code == sf::Keyboard::Space)
        {
            Lumin::SceneManager::setActive("secondary");
        }
    }
}

void MainSceneObject::update(float deltaTime)
{

}

void MainSceneObject::render(sf::RenderWindow &window)
{
    window.draw(rectangle);
    window.draw(sprite);
}