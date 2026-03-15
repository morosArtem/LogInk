#include "Engine.h"

Engine::Engine()
    : m_Vehicle(m_InputHandler)   // vehicle needs input handler
    , m_Car(m_Vehicle)            // car needs vehicle
{
    sf::Vector2f resolution(1280, 720);
    m_Window.create(sf::VideoMode(resolution.x, resolution.y), "LogInk: Escape from Warehouse");

    // Set window icon once
    sf::Image icon;
    if (icon.loadFromFile("Image/icon.png")) {
        m_Window.setIcon(64, 64, icon.getPixelsPtr());
    }
}

void Engine::start() {
    sf::Clock clock;
    while (m_Window.isOpen()) {
        sf::Time dt = clock.restart();
        float dtAsSeconds = dt.asSeconds();

        input();
        update(dtAsSeconds);
        draw();
    }
}
