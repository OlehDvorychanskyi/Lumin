#pragma once 
#include <Lumin.h>
#include "MainSceneObject.h"

class MainScene : public Lumin::Scene
{
private:
    MainSceneObject obj;
public:
    MainScene();
};