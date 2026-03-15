#pragma once

/**
 * @class InputHandler
 * @brief Handles keyboard (or other) input states.
 *        Can be shared among multiple game objects that need to know which keys are pressed.
 */
class InputHandler {
private:
    bool m_UpPressed = false;
    bool m_DownPressed = false;
    bool m_LeftPressed = false;
    bool m_RightPressed = false;

public:
    // State modifiers
    void pressUp()    { m_UpPressed = true; }
    void releaseUp()  { m_UpPressed = false; }
    void pressDown()  { m_DownPressed = true; }
    void releaseDown(){ m_DownPressed = false; }
    void pressLeft()  { m_LeftPressed = true; }
    void releaseLeft(){ m_LeftPressed = false; }
    void pressRight() { m_RightPressed = true; }
    void releaseRight(){ m_RightPressed = false; }

    // Query methods
    bool isUpPressed() const    { return m_UpPressed; }
    bool isDownPressed() const  { return m_DownPressed; }
    bool isLeftPressed() const  { return m_LeftPressed; }
    bool isRightPressed() const { return m_RightPressed; }
};
