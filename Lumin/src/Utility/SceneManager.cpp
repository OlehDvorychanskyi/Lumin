#include "SceneManager.h"
#include <Lumin.h>

namespace Lumin
{
    std::shared_ptr<Scene> SceneManager::active;
    std::unique_ptr<SceneManager::SceneHolder> SceneManager::scenes; 

    void SceneManager::init()
    {
        scenes = std::make_unique<SceneManager::SceneHolder>();
    }

    void SceneManager::SceneHolder::add(const std::string& id, const std::shared_ptr<Scene>& newScene)
    {
        _scenes[id] = newScene;
    }

    void SceneManager::SceneHolder::remove(const std::string& id)
    {
        auto it = _scenes.find(id);
        if (it != _scenes.end())
        {
            _scenes.erase(it);
        }
        else 
        {
            LUMIN_CORE_ERROR("Error: Scene with ID " + id + " not found.");
        }
    }

    std::shared_ptr<Scene> SceneManager::SceneHolder::get(const std::string& id)
    {
        auto it = _scenes.find(id);
        if (it != _scenes.end()) 
            return it->second;
        else 
        {
            LUMIN_CORE_ERROR("Error: Scene with ID " + id + " not found.");
            return std::shared_ptr<Scene>();
        }
    }
}