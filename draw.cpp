#include "Engine.h"

void Engine::draw() {
    m_Window.clear(sf::Color::White);

    // Draw road background
    m_Road.draw(m_Window);
    // Draw car
    m_Car.draw(m_Window);

    m_Window.display();
}
