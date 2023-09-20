#pragma once
#include <SFML/Graphics.hpp>
#include <memory>

namespace Lumin
{
    class WindowManager
    {
    public:
        static std::unique_ptr<sf::RenderWindow> window;
        static void init(const sf::VideoMode& mode, const char* title);
        static void shutdown(); 
    };
}
