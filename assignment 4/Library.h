#pragma once
#include <iostream>
#include <string>
#include "Game.h"

using namespace std;

class Library

{

	Game library[1000];

	int Librarysize;

public:

	Library();

	int addGame();

};
