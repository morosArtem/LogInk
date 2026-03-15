#include <SFML/Graphics.hpp>
#include "TextureHolder.h"
#include "Engine.h"

/**
 * @brief Program entry point.
 *        Initializes the texture holder and starts the game engine.
 */
int main() {
    // Must be created before any texture requests
    TextureHolder texHolder;

    Engine engine;
    engine.start();

    return 0;
    //RenderWindow win(VideoMode(1280, 720), L"LogInk: Ïîáåã ñî ñêëàäà");

    //Image icon;
    //if (!icon.loadFromFile("Image/icon.png"))
    //{
    //    return 1;
    //}

    //win.setIcon(64,64, icon.getPixelsPtr());

    //Texture BackGround;
    //BackGround.loadFromFile("Image/Background.jpg");
    //RectangleShape gamingBackground(Vector2f(1280,720));
    //gamingBackground.setTexture(&BackGround);

    //RectangleShape gamingBackground2(Vector2f(1280, 720));
    //gamingBackground2.setTexture(&BackGround);
    //gamingBackground2.setPosition(Vector2f(0,0));

    //Vector2f pos;
    //Clock clock;
    //double time;

    //Car Car;
    //while (win.isOpen())
    //{
    //    Event event;
    //    time = clock.getElapsedTime().asMicroseconds();
    //    time /= 6000;
    //    clock.restart();
    //    while (win.pollEvent(event))
    //    {
    //        if (event.type == Event::Closed)
    //            win.close();
    //    }
    //    /*gamingBackground.move(-0.2 * time, 0);
    //    pos = gamingBackground.getPosition();
    //    if (pos.x < -3000) gamingBackground.setPosition(3000, pos.y);

    //    gamingBackground2.move(-0.2 * time, 0);
    //    pos = gamingBackground2.getPosition();
    //    if (pos.x < -3000) gamingBackground2.setPosition(3000, pos.y);*/

    //    win.clear();
    //    win.draw(Car.getSprite());
    //    win.draw(gamingBackground2);
    //    win.draw(gamingBackground);
    //    win.display();
    //}
    //return 0;
}
