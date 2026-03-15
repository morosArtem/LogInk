#include "Engine.h"

Engine::Engine()
    : m_Car(m_InputHandler)   // Initialize car with the input handler
{
    Vector2f resolution(1280, 720);
    m_Window.create(VideoMode(resolution.x, resolution.y), "LogInk: Escape from Warehouse");

    // Set window icon once after creation
    Image icon;
    if (icon.loadFromFile("Image/icon.png")) {
        m_Window.setIcon(64, 64, icon.getPixelsPtr());
    }

    // Load background texture
    m_BackgroundTexture.loadFromFile("Image/Background.jpg");
    m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::start() {
    Clock clock;
    while (m_Window.isOpen()) {
        Time dt = clock.restart();
        float dtAsSeconds = dt.asSeconds();

        input();
        update(dtAsSeconds);
        draw();
    }
}
