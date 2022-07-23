
#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Green);

    sf::RectangleShape rectangle(sf::Vector2f(10, 30));

    shape.setOrigin(50, 50);
	shape.setPosition(window.getSize().x / 2, window.getSize().y / 2);

    float x = window.getSize().x / 2;
	float y = 0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Blue);
        window.draw(shape);
        window.draw(rectangle);
        window.display();

        y += 1;
        if (y > window.getSize().y)
            y = 0;
        shape.setPosition(x, y);

    }

    return 0;

}

