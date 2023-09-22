#include <Lumin.h>

class Game : public Lumin::Application
{
public:
    Game()
    {

    }

    ~Game()
    {

    }
};

Lumin::Application* Lumin::createApplication()
{
    return new Game();
}