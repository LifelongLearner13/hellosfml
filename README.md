# First [SFML](http://www.sfml-dev.org) project

## Description

Followed the tutorial "[Building your first SFML game project](http://gamecodeschool.com/sfml/building-your-first-sfml-game-project/)" by John Horton with some modifications.

## Installation

John Horton's tutorial uses Visual Studios 2015 to compile and link the code. Since I am working on a Mac, I adapted the instructions listed on the [SFML and Linux](http://www.sfml-dev.org/tutorials/2.4/start-linux.php) page to my needs. In short here are the steps I took:

1. Install SFML via Homebrew, using: `brew install sfml`
2. Compiled the file using: `g++ -c HelloSFML.cpp -I/usr/local/Cellar/sfml/2.4.0/include`
3. Linked the files together with: `g++ HelloSFML.o -o HelloSFML -L/usr/local/Cellar/sfml/2.4.0/lib -lsfml-graphics -lsfml-window -lsfml-system`
4. Told the dynamic linker where to find SFML (one time only): `export LD_LIBRARY_PATH=/usr/local/Cellar/sfml/2.4.0/lib`
5. Finally ran the program with: `./HelloSFML`

## Font Credit

_Homemade Apple_ by Font Diner via [1001 Free Fonts](http://www.1001freefonts.com/homemade_apple.font)
