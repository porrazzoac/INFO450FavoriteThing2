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
//getting input

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
//setting input

void Game::addGameLibrary()
{
	do
	{
		cout << "Please enter the game Title: " << endl;
		getline(cin, gameTitle);

		cout << "Please enter the game Developer: " << endl;
		getline(cin, gameDev);


		cout << "Please enter the game Genre: " << endl;
		getline(cin, gameGenre);


		cout << "Please enter the game Rating: " << endl;
		getline(cin, gameRating);


		cout << "Please enter the game Platform: " << endl;
		getline(cin, gamePlatform);


		cout << "Please enter the game Cost: " << endl;
		cin >> gameCost;
		cin.ignore();
	} while (gameTitle == " ");
}

ostream& operator << (ostream& output, Game& i)
{
	output << "Game" << i.gameTitle << i.gameDev << i.gameGenre << i.gameRating << i.gamePlatform << i.gameCost << endl;
	return output;
}