#pragma once
#include <SFML/Graphics.hpp>
#include "Car.h"
#include "InputHandler.h"

using namespace sf;

/**
 * @class Engine
 * @brief Main game engine class. Manages the window, game loop, and updates.
 */
class Engine {
private:
    RenderWindow m_Window;
    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    InputHandler m_InputHandler;   // Handles key states
    Car m_Car;                      // Player's car

    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    Engine();
    void start();
};
