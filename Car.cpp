#include "Car.h"
#include "TextureHolder.h"

Car::Car(const Vehicle& vehicle) : m_Vehicle(vehicle) {
    m_Sprite.setTexture(TextureHolder::getTexture("Image/Car.png"));
    // Initial position will be set in update, but we can set it here too
    m_Sprite.setPosition(m_Vehicle.getPosition());
}

void Car::update() {
    // Sync sprite position with vehicle model
    m_Sprite.setPosition(m_Vehicle.getPosition());
}

void Car::draw(sf::RenderWindow& window) const {
    window.draw(m_Sprite);
}
