#pragma once
#include <iostream>
#include <string>
#include "Game.h"

using namespace std;

class Library

{
protected:
	Game library[100];

	int Lsize;

public:

	Library();
	~Library();
	void readGame();
	void addGame();
	void displayList();
	void saveGame();



};
