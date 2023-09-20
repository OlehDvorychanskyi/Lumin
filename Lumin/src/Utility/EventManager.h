#pragma once 
#include <SFML/Graphics.hpp>
#include <memory>

namespace Lumin
{
    class EventManager
    {
    public:
        static std::unique_ptr<sf::Event> event;
        static void init();
    };
}