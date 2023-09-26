#pragma once 
#include <SFML/Graphics.hpp>

namespace Lumin
{
    class Scene
    {
    public:
        virtual void processEvent(const sf::Event &event) = 0;
        virtual void update() = 0;
        virtual void render() = 0;
        virtual ~Scene() = default;
    };
}