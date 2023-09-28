#pragma once 
#include <unordered_map>
#include <memory>

#include <SFML/Graphics/Texture.hpp>

#include <Core/Assert.h>
#include <Logging/Logger.h>

namespace Lumin
{
    class ResourceHolders
    {
        friend class Initializer;
    private:
        using ResourceID = std::string; 

        template <typename Resource, typename Identifier>
        class ResourceHolder 
        {
        private:
            std::unordered_map<Identifier, Resource> m_resourceMap; 
        public:
            template <typename Parameter> 
            void load(Identifier id, const std::string& filename, const Parameter& secondParam);
            void load(Identifier id, const std::string& filename);
            const Resource& get(Identifier id) const;
            Resource& get(Identifier id);
        };

        static std::unique_ptr<ResourceHolder<sf::Texture, ResourceID>> m_textures;
        
        static void init();
        static void shutdown();

    public:
        static ResourceHolder<sf::Texture, ResourceID>& getTextureHolder() { return *m_textures; }
    };

    template <typename Resource, typename Identifier>
    template <typename Parameter> 
    void ResourceHolders::ResourceHolder<Resource, Identifier>::load(Identifier id, const std::string& filename, const Parameter& secondParam)
    {
        Resource resource;
        LUMIN_CORE_ASSERT(resource.loadFromFile(filename, secondParam), "Failed to load " + filename);
        
        auto inserted = m_resourceMap.insert(std::make_pair(id, resource));
        LUMIN_CORE_ASSERT(inserted.second, "Failed to insert resource " + filename);
    }

    template <typename Resource, typename Identifier>
    void ResourceHolders::ResourceHolder<Resource, Identifier>::load(Identifier id, const std::string& filename)
    {
        
        Resource resource;
        LUMIN_CORE_ASSERT(resource.loadFromFile(filename), "Failed to load " + filename);
        
        auto inserted = m_resourceMap.insert(std::make_pair(id, resource));
        LUMIN_CORE_ASSERT(inserted.second, "Failed to insert resource " + filename);
    }

    template <typename Resource, typename Identifier>
    const Resource& ResourceHolders::ResourceHolder<Resource, Identifier>::get(Identifier id) const
    {
        auto found_element = m_resourceMap.find(id);
        LUMIN_CORE_ASSERT(found_element != m_resourceMap.end(), "Failed to found '" + id + "'");

        return found_element->second;
    }

    template <typename Resource, typename Identifier>
    Resource& ResourceHolders::ResourceHolder<Resource, Identifier>::get(Identifier id)
    {
        auto found_element = m_resourceMap.find(id);
        LUMIN_CORE_ASSERT(found_element != m_resourceMap.end(), "Failed to found '" + id + "'");

        return found_element->second;
    }
}