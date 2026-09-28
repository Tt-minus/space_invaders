#include <iostream>
#include <SFML/Graphics.hpp>

//game_parameters.hpp
#pragma once //insure that this header file is included only once and there will no multiple definition of the same thing

struct Parameters {
	static constexpr int game_width = 800;
	static constexpr int game_height = 600;
	static constexpr int sprite_size = 32;
};

#include <vector>
#include <memory>
#include "ship.hpp"
//game_system.hpp
struct GameSystem {
	//The global variables goes here
	

		//game system functions
		static void init();
	static void clean();
	static void update(const float& dt);
	static void render(sf::RenderWindow& window);
	static std::vector<std::shared_ptr<Ship>> ships; //vector of shared pointers to Ships.
};

//game_system.hpp
#include <vector>
#include <memory>
#include "ship.hpp"
struct GameSystem {
	//The global variables goes here
	static std::vector<std::shared_ptr<Ship>> ships; //vector of shared pointers to Ships.
	
};

//main.cpp
sf::Texture spritesheet;
sf::Sprite invader;


void render(sf::RenderWindow& window) {
    window.draw(invader);
}

int main() {
	//create the window
	sf::RenderWindow window(sf::VideoMode({ 600, 400 }), "SPACE INVADERS");
	//initialise and load
	
	while (window.isOpen()) {
		render(window);
		
		window.display();
	};
	
}