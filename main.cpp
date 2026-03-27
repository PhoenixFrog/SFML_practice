#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

int main()
{
    RenderWindow window(VideoMode(500, 500), "coolmathgames.com",
                        Style::Default /*defaults to Resize, Titlebar and Close*/);
    //window.setVerticalSyncEnabled(true); //VSync = matches monitor refresh rate
    window.setFramerateLimit(20);

    bool LMB_pressed = false;
    bool RMB_pressed = false;
    int MouseX, MouseY;
    while (window.isOpen()) //main game loop
    {
        // bool LMB_pressed = false;
        // bool RMB_pressed = false;
        // int MouseX, MouseY;

        Event event;
        while (window.pollEvent(event)) //checks for everything that happened since the last frame
        {

            if (event.type == Event::Closed /*if the close button is pressed*/)
            {
                window.close();
            }

            if (event.type == Event::KeyPressed)
            {
                if (event.key.code == Keyboard::Enter)
                {
                    cout << event.key.control << " enter was pressed" << endl;
                    //will only print when "flushed" e.g. endl \n or the process ending.
                }
            }
            if (event.type == Event::KeyReleased)
            {
                if (event.key.code == Keyboard::Enter)
                {
                    cout << "Enter was released" << endl;
                }
            }
            if (event.type == Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == Mouse::Left)
                {
                    LMB_pressed = true;
                }
                if (event.mouseButton.button == Mouse::Right)
                {
                    RMB_pressed = true;
                }
                MouseX = event.mouseButton.x;
                MouseY = event.mouseButton.y;
            }
            if (event.type == Event::MouseButtonReleased)
            {
                if (event.mouseButton.button == Mouse::Left)
                {
                    LMB_pressed = false;
                }
                if (event.mouseButton.button == Mouse::Right)
                {
                    RMB_pressed = false;
                }
            }
        }

        //logic handling
        if (LMB_pressed)
        {
            cout << "LMB pressed at " << Mouse::getPosition().x << ", " << Mouse::getPosition().y << endl;
        }
        if (RMB_pressed)
        {
            cout << "RMB pressed at " << Mouse::getPosition().x << ", " << Mouse::getPosition().y << endl;
        }
        if (Keyboard::isKeyPressed(Keyboard::Up))
            cout << "up was pressed" << endl;

        //rendering
        window.clear();
        //draw things then...
        window.display();
    }

    return 0;
}
