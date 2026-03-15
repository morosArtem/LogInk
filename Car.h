#pragma once
#include <SFML/Graphics.hpp>
#include "Vehicle.h"

/**
 * @class Car
 * @brief Graphical representation of a vehicle. Contains a sprite and links to the vehicle model.
 *        It does not contain movement logic; it just displays the vehicle at the model's position.
 */
class Car {
private:
    sf::Sprite m_Sprite;
    const Vehicle& m_Vehicle;   // Reference to the logical vehicle (we don't own it)

public:
    Car(const Vehicle& vehicle);
    void update();  // (optional) could handle animation, but for now just syncs position
    void draw(sf::RenderWindow& window) const;  // draws the sprite
};
