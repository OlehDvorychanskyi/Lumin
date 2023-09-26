#include "Scene.h"

namespace Lumin
{
    void Scene::processEvent(const sf::Event &event)
    {
        for (auto& object : objects) 
        {
            object->processEvent(event);
        }
    }

    void Scene::update(float deltaTime)
    {
        for (auto& object : objects) 
        {
            object->update(deltaTime);
        }
    }

    void Scene::render(sf::RenderWindow &window)
    {
        for (auto& object : objects) 
        {
            object->render(window);
        }
    }

    void Scene::addSceneObject(std::unique_ptr<SceneObject> obj)
    {
        objects.push_front(std::move(obj));
    }
}