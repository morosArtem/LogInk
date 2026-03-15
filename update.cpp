#include "Engine.h"

void Engine::update(float dtAsSeconds) {
    // Update the logical vehicle first
    m_Vehicle.update(dtAsSeconds);
    // Then synchronise the car's graphics
    m_Car.update();
}
