#pragma once
#include <SFML/System/Vector2.hpp>
#include "InputHandler.h"

/**
 * @class Vehicle
 * @brief Represents the logical model of a vehicle (position, speed, movement logic).
 *        It does not know anything about graphics.
 */
class Vehicle {
private:
    sf::Vector2f m_Position;  // Position in world coordinates
    float m_Speed;             // Base speed (pixels per second)
    InputHandler& m_Input;      // Reference to input provider

public:
    Vehicle(InputHandler& input);
    void update(float elapsedTime);
    sf::Vector2f getPosition() const { return m_Position; }
};
