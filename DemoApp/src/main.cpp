#include <Lumin.h>
#include <Core/EntryPoint.h>

#include "MainScene.h"
#include "SecondaryScene.h"

class Game : public Lumin::Application
{
public:
    Game()
    {
        Lumin::SceneManager::scenes->add("main", std::make_shared<MainScene>());
        Lumin::SceneManager::scenes->add("secondary", std::make_shared<SecondaryScene>());
        Lumin::SceneManager::active = Lumin::SceneManager::scenes->get("main");
    }
};

Lumin::Application* Lumin::createApplication()
{
    return new Game();
}