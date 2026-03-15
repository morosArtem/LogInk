#pragma once
#include <SFML/Graphics.hpp>
#include "InputHandler.h"

/**
 * @class Car
 * @brief Represents the player's car. It holds a sprite and updates its position
 *        based on input from an InputHandler.
 */
class Car {
private:
    sf::Sprite m_Sprite;      // The visual representation of the car
    sf::Vector2f m_Position;  // Current position in the world
    float m_Speed;            // Movement speed (pixels per second)
    InputHandler& m_Input;     // Reference to the input provider

public:
    /**
     * @brief Constructor – takes an InputHandler reference used to query keys.
     * @param input Reference to the input handler.
     */
    Car(InputHandler& input);

    /**
     * @brief Updates the car's position based on elapsed time and current input.
     * @param elapsedTime Time since last frame (seconds).
     */
    void update(float elapsedTime);

    /**
     * @brief Returns the sprite for drawing.
     * @return The car's sprite.
     */
    sf::Sprite getSprite() const { return m_Sprite; }
};
