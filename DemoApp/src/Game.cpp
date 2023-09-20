#include "Game.h"

Game::Game()
{

}

Game::~Game()
{

}

void Game::run()
{
    while (!Lumin::WindowManager::window->isOpen())
    {
        while (Lumin::WindowManager::window->pollEvent(*Lumin::EventManager::event))
        {
            if (Lumin::EventManager::event->type == sf::Event::Closed)
                Lumin::WindowManager::window->close();
        }
        Lumin::WindowManager::window->clear();
        Lumin::WindowManager::window->display();
    }
}