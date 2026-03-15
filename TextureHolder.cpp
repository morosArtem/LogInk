#include "TextureHolder.h"

// Initialize static member
TextureHolder* TextureHolder::m_s_Instance = nullptr;

TextureHolder::TextureHolder() {
    m_s_Instance = this;
}

sf::Texture& TextureHolder::getTexture(const std::string& filename) {
    auto& texturesMap = m_s_Instance->m_Textures;
    auto keyValuePair = texturesMap.find(filename);
    
    if (keyValuePair != texturesMap.end()) {
        // Texture already exists – return it
        return keyValuePair->second;
    } else {
        // Texture not found – load it from file and store
        sf::Texture newTexture;
        newTexture.loadFromFile(filename);
        texturesMap.insert(std::make_pair(filename, newTexture));
        return texturesMap[filename];
    }
}
