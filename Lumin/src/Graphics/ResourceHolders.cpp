#include <Graphics/ResourceHolders.h>

namespace Lumin
{
    std::unique_ptr<ResourceHolders::ResourceHolder<sf::Texture, ResourceHolders::ResourceID>> ResourceHolders::m_textures;
    std::unique_ptr<ResourceHolders::ResourceHolder<sf::Shader, ResourceHolders::ResourceID>> ResourceHolders::m_shaders;
    std::unique_ptr<ResourceHolders::ResourceHolder<sf::Font, ResourceHolders::ResourceID>> ResourceHolders::m_fonts;
    std::unique_ptr<ResourceHolders::ResourceHolder<sf::SoundBuffer, ResourceHolders::ResourceID>> ResourceHolders::m_soundBuffers;

    void ResourceHolders::init()
    {
        m_textures = std::make_unique<ResourceHolders::ResourceHolder<sf::Texture, ResourceHolders::ResourceID>>();
        m_shaders = std::make_unique<ResourceHolders::ResourceHolder<sf::Shader, ResourceHolders::ResourceID>>();
        m_fonts = std::make_unique<ResourceHolders::ResourceHolder<sf::Font, ResourceHolders::ResourceID>>();
        m_soundBuffers = std::make_unique<ResourceHolders::ResourceHolder<sf::SoundBuffer, ResourceHolders::ResourceID>>();
    }

    void ResourceHolders::shutdown()
    {
        m_textures.reset();
        m_shaders.reset();
        m_fonts.reset();
        m_soundBuffers.reset();
    }

}