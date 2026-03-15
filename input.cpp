#include "Engine.h"

void Engine::input() {
    // Close window on Escape key
    if (Keyboard::isKeyPressed(Keyboard::Escape)) {
        m_Window.close();
    }

    // --- Up movement: W or Up arrow ---
    if (Keyboard::isKeyPressed(Keyboard::W) || Keyboard::isKeyPressed(Keyboard::Up)) {
        m_InputHandler.pressUp();
    } else {
        m_InputHandler.releaseUp();
    }

    // --- Down movement: S or Down arrow ---
    if (Keyboard::isKeyPressed(Keyboard::S) || Keyboard::isKeyPressed(Keyboard::Down)) {
        m_InputHandler.pressDown();
    } else {
        m_InputHandler.releaseDown();
    }

    // --- Left movement: A or Left arrow ---
    if (Keyboard::isKeyPressed(Keyboard::A) || Keyboard::isKeyPressed(Keyboard::Left)) {
        m_InputHandler.pressLeft();
    } else {
        m_InputHandler.releaseLeft();
    }

    // --- Right movement: D or Right arrow ---
    if (Keyboard::isKeyPressed(Keyboard::D) || Keyboard::isKeyPressed(Keyboard::Right)) {
        m_InputHandler.pressRight();
    } else {
        m_InputHandler.releaseRight();
    }
}
