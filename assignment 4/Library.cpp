#include <iostream>
#include <string>
#include "Game.h"
#include "Library.h"

using namespace std;

Library::Library()

{

	Lsize = 0;

}
void Library::addGame()
{
	Game newLibrary;
	newLibrary.addGameLibrary();
	{
		library[Lsize] = newLibrary;
		Lsize++;
	}

}
//add games to library
void Library::displayList()
{
	int i;
	for (i = 0; i < Lsize; i++)
	{
		cout << library[i] << endl;
		cout << endl;
	}
}
// displays the library of games
//couldn't figure out the files 

Library::~Library()
{
}