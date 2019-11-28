#include <iostream>
#include <string>
#include "Game.h"
using namespace std;

Game::Game()
{
	gameTitle = "";

	gameDev = "";

	gameGenre = "";

	gameRating = "";

	gamePlatform = "";

	gameCost = 0;
}

Game::~Game()
{
}


string Game::getgameTitle()
{
	return gameTitle;
}
string Game::getgameDev()
{
	return gameDev;
}
string Game::getgameGenre()
{
	return gameGenre;
}
string Game::getgameRating()
{
	return gameRating;
}
string Game::getgamePlatform()
{
	return gamePlatform;
}
double Game::getgameCost()
{
	return gameCost;
}

void Game::setgameTitle(string T)
{
	gameTitle = T;
}
void Game::setgameDev(string D)
{
	gameDev = D;
}
void Game::setgameGenre(string G)
{
	gameGenre = G;
}
void Game::setgameRating(string R)
{
	gameRating = R;
}
void Game::setgamePlatform(string P)
{
	gamePlatform = P;
}
void Game::setgameCost(double C)
{
	gameCost = C;
}

void Game::addgame()
{
	do
	{
		cout << "Please enter the game Title: " << endl;
		cin >> gameTitle;

		cout << "Please enter the game Developer: " << endl;
		cin >> gameDev;


		cout << "Please enter the game Genre: " << endl;
		cin >> gameGenre;


		cout << "Please enter the game Rating: " << endl;
		cin >> gameRating;


		cout << "Please enter the game Platform: " << endl;
		cin >> gamePlatform;


		cout << "Please enter the game Cost: " << endl;
		cin >> gameCost;
		cin.ignore();
	} while (gamePlatform.empty());
}

ostream& operator << (ostream& output, Game& library)
{
	output << "Game: " << library.gameTitle << endl;
	output << "Developer: " << library.gameDev << endl;
	output << "Genre: " << library.gameGenre << endl;
	output << "Rating: " << library.gameRating << endl;
	output << "Platform: " << library.gamePlatform << endl;
	output << "Cost: " << library.gameCost << endl;
	return output;
}