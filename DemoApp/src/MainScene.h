#pragma once 
#include <Lumin.h>

class MainScene : public Lumin::Scene
{
private:
    sf::RectangleShape rectangle;
public:
    MainScene();
    virtual void processEvent(const sf::Event &event) override;
    virtual void update() override;
    virtual void render() override;
};