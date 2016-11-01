// Code from "Building your first SFML game project" by John Horton
// http://gamecodeschool.com/sfml/building-your-first-sfml-game-project/

// These "include" code from the C++ library and SFML
#include <SFML/Graphics.hpp>

int main()
{
	// Make a window that is 800 by 200 pixels
	// And has the title "Hello from SFML"
	sf::RenderWindow window(sf::VideoMode(1100, 200), "Hello from SFML");

	sf::Text message;

	// Define font and assign font to message
	sf::Font font;
	font.loadFromFile("HomemadeApple.ttf");
	message.setFont(font);

	// Assign text to message
	message.setString("Hello world");

	// Adjust size of message font
	message.setCharacterSize(150);

	// Choose a font color
	message.setFillColor(sf::Color::White);

	while (window.isOpen())
	{
		// If the window is closed, end program
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Clear everything from the last run of the while loop
		window.clear();

		// Draw the message on window
		window.draw(message);
		window.display();
	}

	return 0;
}
