#include "Vehicle.h"

Vehicle::Vehicle(InputHandler& input) : m_Input(input) {
    m_Speed = 400.0f;
    m_Position = {10.0f, 25.0f};
}

void Vehicle::update(float elapsedTime) {
    // Movement logic (same as before, but without graphics)
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
}
