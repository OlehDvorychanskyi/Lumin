#include "MainScene.h"

MainScene::MainScene()
{
    addSceneObject(std::make_unique<MainSceneObject>(obj));
}