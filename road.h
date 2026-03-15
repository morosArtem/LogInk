#pragma once
#include <SFML/Graphics.hpp>

/**
 * @class Road
 * @brief Represents the road in the game world. Contains a background texture and possibly other road elements.
 *        Currently just a static background.
 */
class Road {
private:
    sf::Sprite m_Sprite;
    sf::Texture m_Texture;

public:
    Road();
    void draw(sf::RenderWindow& window) const;
};
