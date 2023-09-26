#pragma once 
#include <SFML/Graphics.hpp>
#include <forward_list>
#include <Scene/SceneObject.h>
#include <memory>

namespace Lumin
{
    class Scene
    {
    private:
        std::forward_list<std::unique_ptr<SceneObject>> objects;
    public:
        virtual void processEvent(const sf::Event &event) final;
        virtual void update(float deltaTime) final;
        virtual void render(sf::RenderWindow &window) final;
        virtual ~Scene() = default;

        void addSceneObject(std::unique_ptr<SceneObject> obj);
    };
}