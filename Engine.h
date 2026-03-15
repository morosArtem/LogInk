#pragma once
#include <SFML/Graphics.hpp>
#include "InputHandler.h"
#include "Vehicle.h"
#include "Car.h"
#include "Road.h"

class Engine {
private:
    sf::RenderWindow m_Window;

    InputHandler m_InputHandler;
    Vehicle m_Vehicle;
    Car m_Car;
    Road m_Road;

    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    Engine();
    void start();
};
