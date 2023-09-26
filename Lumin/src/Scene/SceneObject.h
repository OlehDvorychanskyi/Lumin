#pragma once 
#include <SFML/Graphics.hpp>

namespace Lumin
{
    class SceneObject
    {
    public:
        virtual void processEvent(const sf::Event &event) = 0;
        virtual void update(float deltaTime) = 0;
        virtual void render(sf::RenderWindow &window) = 0;
        virtual ~SceneObject() = default;
    };
}