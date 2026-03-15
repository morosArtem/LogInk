#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include <string>

/**
 * @class TextureHolder
 * @brief Singleton-like class for loading and storing textures.
 *        Ensures each texture is loaded only once and can be accessed globally.
 */
class TextureHolder {
private:
    std::map<std::string, sf::Texture> m_Textures;   // Container for loaded textures
    static TextureHolder* m_s_Instance;               // Singleton instance pointer

public:
    TextureHolder();
    /**
     * @brief Returns a reference to the texture associated with the given filename.
     *        If the texture hasn't been loaded yet, it loads it first.
     * @param filename Path to the texture file.
     * @return Reference to the loaded texture.
     */
    static sf::Texture& getTexture(const std::string& filename);
};
