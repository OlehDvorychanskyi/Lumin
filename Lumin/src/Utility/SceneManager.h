#pragma once 
#include "Scene.h"
#include <unordered_map>
#include <memory>
#include <string>

namespace Lumin
{
    class SceneManager
    {
    private:
        class SceneHolder
        {
        private:
            std::unordered_map<std::string, std::shared_ptr<Scene>> _scenes; 
        public:
            void add(const std::string& id, const std::shared_ptr<Scene>& newScene);
            void remove(const std::string& id);
            std::shared_ptr<Scene> get(const std::string& id);
        };
    public:
        static std::shared_ptr<Scene> active;
        static std::unique_ptr<SceneHolder> scenes; 
        static void init();
    };
}