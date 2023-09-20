#pragma once 
#include <Lumin.h>

class Game : public Lumin::Application
{
public:
    Game();
    ~Game();
    virtual void run() override;
};