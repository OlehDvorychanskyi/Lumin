#pragma once
#include <Lumin.h>
#include "SecondarySceneObject.h"

class SecondaryScene : public Lumin::Scene
{
private:
    SecondarySceneObject obj;
public:
    SecondaryScene();
};