#include <Graphics/ResourceHolders.h>

namespace Lumin
{
    std::unique_ptr<ResourceHolders::ResourceHolder<sf::Texture, ResourceHolders::ResourceID>> ResourceHolders::m_textures;

    void ResourceHolders::init()
    {
        m_textures = std::make_unique<ResourceHolders::ResourceHolder<sf::Texture, ResourceHolders::ResourceID>>();
    }

    void ResourceHolders::shutdown()
    {
        m_textures.reset();
    }

}