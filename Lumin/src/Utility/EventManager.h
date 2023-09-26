#pragma once 
#include <SFML/Graphics.hpp>
#include <memory>

#include <Core/Initializer.h>
#include <Core/Application.h>

namespace Lumin
{
    class EventManager
    {
    private:
        static std::unique_ptr<sf::Event> event;
        static void init();
        static void shutdown();

        friend class Initializer;
        friend class Application;
    };
}