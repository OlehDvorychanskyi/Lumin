#pragma once 
#include <Lumin.h>

class MainScene : public Lumin::Scene
{
private:
    sf::RectangleShape rectangle;
public:
    MainScene();
    virtual void processEvent() override;
    virtual void update() override;
    virtual void render() override;
};