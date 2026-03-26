#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1000,1600),"cool math games.com");
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event));
        {
            //do nothing
        }
        window.clear();
        window.display();
    }

    return 0;
}
