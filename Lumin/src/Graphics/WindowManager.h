#pragma once
#include <SFML/Graphics.hpp>
#include <memory>

namespace Lumin
{
    class WindowManager
    {
    private:
        static std::unique_ptr<sf::RenderWindow> window;
        static void init(const sf::VideoMode& mode, const char* title);
        static void shutdown(); 

        friend class Initializer;
        friend class Application;
    };
}
