#include "Engine.h"

void Engine::update(float dtAsSeconds) {
    // Update car position based on current input and elapsed time
    m_Car.update(dtAsSeconds);
}
