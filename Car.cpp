#include "Car.h"
#include "TextureHolder.h"

Car::Car(InputHandler& input) : m_Input(input) {
    m_Speed = 400.0f;
    // Load the car texture using the TextureHolder singleton.
    m_Sprite.setTexture(TextureHolder::getTexture("Image/Car.png"));
    m_Position = {10.0f, 25.0f};
    m_Sprite.setPosition(m_Position);
}

void Car::update(float elapsedTime) {
    // Move according to pressed keys.
    // Note: horizontal speeds are intentionally different (left slower, right faster)
    if (m_Input.isUpPressed()) {
        m_Position.y -= m_Speed * elapsedTime;
    }
    if (m_Input.isDownPressed()) {
        m_Position.y += m_Speed * elapsedTime;
    }
    if (m_Input.isLeftPressed()) {
        m_Position.x -= (m_Speed * elapsedTime) / 2.0f;
    }
    if (m_Input.isRightPressed()) {
        m_Position.x += (m_Speed * elapsedTime) * 1.25f;
    }
    // Apply the new position to the sprite
    m_Sprite.setPosition(m_Position);
}
