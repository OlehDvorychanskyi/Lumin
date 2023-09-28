#include <Graphics/ResourceHolders.h>

namespace Lumin
{
    std::unique_ptr<ResourceHolders::ResourceHolder<sf::Texture, ResourceHolders::ResourceID>> ResourceHolders::m_textures;
    std::unique_ptr<ResourceHolders::ResourceHolder<sf::Shader, ResourceHolders::ResourceID>> ResourceHolders::m_shaders;

    void ResourceHolders::init()
    {
        m_textures = std::make_unique<ResourceHolders::ResourceHolder<sf::Texture, ResourceHolders::ResourceID>>();
        m_shaders = std::make_unique<ResourceHolders::ResourceHolder<sf::Shader, ResourceHolders::ResourceID>>();
    }

    void ResourceHolders::shutdown()
    {
        m_textures.reset();
        m_shaders.reset();
    }

}