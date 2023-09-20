#pragma once 

namespace Lumin
{
    class Scene
    {
    public:
        virtual void processEvent() = 0;
        virtual void update() = 0;
        virtual void render() = 0;
        virtual ~Scene() = default;
    };
}