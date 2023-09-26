#pragma once 
#include <Lumin.h>

class MainScene : public Lumin::Scene
{
private:
    sf::RectangleShape rectangle;
public:
    MainScene();
    virtual void processEvent(const sf::Event &event) override;
    virtual void update(float deltaTime) override;
    virtual void render(sf::RenderWindow &window) override;
};