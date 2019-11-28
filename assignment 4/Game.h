#pragma once
#include <iostream>
#include <string>
using namespace std;

class Game
{

	string gameTitle;

	string gameDev;

	string gameGenre;

	string gameRating;

	string gamePlatform;

	double gameCost;
public:

	Game();
	~Game();

	string getgameTitle();

	string getgameDev();

	string getgameGenre();

	string getgameRating();

	string getgamePlatform();

	double getgameCost();


	void setgameTitle(string T);

	void setgameDev(string D);

	void setgameGenre(string G);

	void setgameRating(string R);

	void setgamePlatform(string P);

	void setgameCost(double C);

	friend ostream& operator<<(ostream& output, Game& Gamelibrary);
};
