#pragma once
#include <Lumin.h>

class SecondaryScene : public Lumin::Scene
{
private:
    sf::RectangleShape rectangle;
public:
    SecondaryScene();
    virtual void processEvent(const sf::Event &event) override;
    virtual void update() override;
    virtual void render() override;
};