#include "Road.h"

Road::Road() {
    m_Texture.loadFromFile("Image/Background.jpg");
    m_Sprite.setTexture(m_Texture);
}

void Road::draw(sf::RenderWindow& window) const {
    window.draw(m_Sprite);
}
