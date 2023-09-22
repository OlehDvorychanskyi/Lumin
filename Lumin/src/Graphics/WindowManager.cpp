#include "WindowManager.h"

namespace Lumin
{
    std::unique_ptr<sf::RenderWindow> WindowManager::window;

    void WindowManager::init(const sf::VideoMode& mode, const char* title)
    {   
        window = std::make_unique<sf::RenderWindow>(mode, title);
    }  

    void WindowManager::shutdown()
    {
        window.reset();
    }    
}