#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

int main()
{
    RenderWindow window(VideoMode(500, 500), "coolmathgames.com",
                        Style::Titlebar | Style::Close /*defaults to Resize, Titlebar and Close*/);
    //window.setVerticalSyncEnabled(true); //VSync = matches monitor refresh rate
    window.setFramerateLimit(30);

    RectangleShape rectangle(Vector2f(100,50));
    rectangle.setOrigin(50,25);
    rectangle.setPosition(250,250);
    rectangle.setFillColor(Color(230,200,0));


    while (window.isOpen()) //main game loop
    {

        Event event;
        while (window.pollEvent(event)) //checks for everything that happened since the last frame
        {
            if (event.type == Event::Closed /*if the close button is pressed*/)
            {
                window.close();
            }
        }
        //logic
        //rectangle.move(-1,-1);
        rectangle.rotate(1.0);
        //rendering
        window.clear(Color(53,200,200));
        //draw things
        window.draw(rectangle);
        //then...
        window.display();
    }

    return 0;
}
