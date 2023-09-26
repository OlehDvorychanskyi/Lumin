#include "SecondaryScene.h"

SecondaryScene::SecondaryScene()    
{
    addSceneObject(std::make_unique<SecondarySceneObject>(obj));
}