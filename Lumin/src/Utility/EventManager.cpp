#include "EventManager.h"

namespace Lumin
{
    std::unique_ptr<sf::Event> EventManager::event;
    
    void EventManager::init()
    {
        event = std::make_unique<sf::Event>();
    }

    void EventManager::shutdown()
    {
        event.reset();
    }
}