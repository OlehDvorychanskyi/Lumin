#pragma once 
#include <Lumin.h>

class SecondarySceneObject : public Lumin::SceneObject
{
private:
    sf::RectangleShape rectangle;
public:
    SecondarySceneObject();
    virtual void processEvent(const sf::Event &event) override;
    virtual void update(float deltaTime) override;
    virtual void render(sf::RenderWindow &window) override;
};