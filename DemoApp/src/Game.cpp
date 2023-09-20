#include "Game.h"

#include "MainScene.h"
#include "SecondaryScene.h"

Game::Game()
{
    Lumin::SceneManager::scenes->add("main", std::make_shared<MainScene>());
    Lumin::SceneManager::scenes->add("secondary", std::make_shared<SecondaryScene>());
    Lumin::SceneManager::active = Lumin::SceneManager::scenes->get("main");
}

Game::~Game()
{

}

void Game::run()
{
    while(Lumin::WindowManager::window->isOpen())
    {   
        Lumin::SceneManager::active->processEvent();
        Lumin::SceneManager::active->update();    
        Lumin::SceneManager::active->render();
    }
}