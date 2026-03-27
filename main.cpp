#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1600, 1000), "cool math games.com",
                        Style::Default /*defaults to Resize, Titlebar and Close*/);
    //window.setVerticalSyncEnabled(true); //VSync = matches monitor refresh rate
    window.setFramerateLimit(20);

    while (window.isOpen()) //main game loop
    {
        Event event;
        while (window.pollEvent(event)) //checks for everything that happened since the last frame
        {
            if (event.type == Event::Closed /*if the close button is pressed*/) window.close();
        }

        //logic handling
        //rendering
        window.clear();
        //draw things then...
        window.display();
    }

    return 0;
}
