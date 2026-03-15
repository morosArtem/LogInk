#pragma once
#include <SFML/Graphics.hpp>
#include "InputHandler.h"

// Represents the player's car. It holds a sprite and updates its position
// based on input from an InputHandler.
class Car {
private:
    sf::Sprite m_Sprite;          // The visual representation
    sf::Vector2f m_Position;       // Current position in the world
    float m_Speed;                 // Movement speed (pixels per second)
    InputHandler& m_Input;          // Reference to the input provider

public:
    // Constructor: takes an InputHandler reference that will be used to query keys.
    Car(InputHandler& input);

    // Updates the car's position based on elapsed time and current input.
    void update(float elapsedTime);

    // Returns the sprite for drawing.
    sf::Sprite getSprite() const { return m_Sprite; }
};
