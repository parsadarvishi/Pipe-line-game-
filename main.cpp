#include <SFML/Graphics.hpp>
#include "Graph.cpp"
#include "generate_core.cpp"
int main()
{
        Generate G;
        G.create_game_graph();
    sf::RenderWindow win(sf::VideoMode(200, 200), "PIPE LINE");

    while (win.isOpen())
    {
        sf::Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
        }

        win.clear(sf::Color::White);
        win.display();
    }

    return 0;
}
