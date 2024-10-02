
#include "Game.h"
#include <iostream>

Game::Game(sf::RenderWindow& game_window)
  : window(game_window)
{
  srand(time(NULL));
}

Game::~Game()
{

}

bool Game::init()
{	 
	// Sets background
	if (!background_texture.loadFromFile("../Data/WhackaMole_Worksheet/background.png")) 
	{
		std::cout << "background texture did not load :( \n";
	}
	background.setTexture(background_texture);

	// Sets bird
	if (!bird_texture.loadFromFile("../Data/WhackaMole_Worksheet/bird.png"))
	{
		std::cout << "bird texture did not load :( \n";
	} 
	bird.setTexture(bird_texture);

	bird.setPosition(100, 100);
	bird.setScale(0.5f, 0.5f);

  return true;
}

void Game::update(float dt)
{

}

void Game::render()
{
	window.draw(background);
	window.draw(bird);
}

void Game::mouseClicked(sf::Event event)
{
  //get the click position
  sf::Vector2i click = sf::Mouse::getPosition(window);


}

void Game::keyPressed(sf::Event event)
{

}


