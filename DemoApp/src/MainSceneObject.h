#pragma once 
#include <Lumin.h>

class MainSceneObject : public Lumin::SceneObject
{
private:
    sf::RectangleShape rectangle;
public:
    MainSceneObject();
    virtual void processEvent(const sf::Event &event) override;
    virtual void update(float deltaTime) override;
    virtual void render(sf::RenderWindow &window) override;
};