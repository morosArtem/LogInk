#include "Engine.h"

void Engine::draw() {
    // Clear the window with a white background
    m_Window.clear(Color::White);

    // Draw background first
    m_Window.draw(m_BackgroundSprite);

    // Draw the car on top
    m_Window.draw(m_Car.getSprite());

    // Display everything
    m_Window.display();
}
