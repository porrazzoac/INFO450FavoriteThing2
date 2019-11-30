#include <iostream>
#include <string>
#include "Game.h"
#include "Library.h"

using namespace std;

int main()
{
	
	Library myLibrary;
	Game myGame;
	cout << "   Track your Favorite Video Games!   " << endl;
	cout << "   Track the Title, Developer, Genre, Rating, Platform, and Cost   " << endl;
	cout << "   Build and Maintain your Library!   " << endl;
	cout << "   Compare with your Friends to see whos Library is better   " << endl;
	int input = 0;
	char input2{};
	do {


		cout << "   Please select a number (1 - 5)   " << endl;
		cout << "   Option 1 reads items from a file    " << endl;
		cout << "   Option 2 add new items to the list    " << endl;
		cout << "   Option 3 shows the current items in the list    " << endl;
		cout << "   Option 4 saves your current list to a file    " << endl;
		cout << "   Option 5 exits the program    " << endl;
		// introductory screen and list of options to choose
		cin >> input;
		cin.ignore();
		if (input == 1) {
			cout << " You selected to read items from a file. Please enter the specific file path to read from    " << endl;
			// I didn't know how to implement the file options
			cin.ignore();
			cin.clear();
		}
		else if (input == 2)
		{
			cout << " You selected to add new favorite items to your list    " << endl;
			myLibrary.addGame();
			myLibrary.displayList();
			cin.ignore();
			cin.clear();
		}
		else if (input == 3)
		{
			cout << " You selected to show your current list    " << endl;
			myLibrary.displayList();
			cin.ignore();
			cin.clear();
		}
		else if (input == 4)
		{
			cout << " You selected to save the current list to file    " << endl;
			cout << " Please enter the specific file path    " << endl;
			// I didn't know how to implement the file options
			cin.ignore();
			cin.clear();
		}
		else if (input == 5)
		{
			cout << " You selected to exit the program    " << endl;
			cin.ignore();
			cin.clear();
			system("pause");
			return 0;
		}
		//different options to choose from
	} while (input != 0 && input > 5 || input2 == 'Y');
	do
	{
		cout << "   If you would like to continue with additional options please enter: 'Y' for Yes   " << endl;
		cin >> input2;
		cout << "   Please select a number (1 - 5)   " << endl;
		cout << "   Option 1 reads items from a file    " << endl;
		cout << "   Option 2 add new items to the list    " << endl;
		cout << "   Option 3 shows the current items in the list    " << endl;
		cout << "   Option 4 saves your current list to a file    " << endl;
		cout << "   Option 5 exits the program    " << endl;
		cin >> input;

		cin.ignore();
		cin.clear();
	} while (input != 0 && input > 5 || input2 == 'Y');
	myLibrary.displayList();
	system("pause");
	return 0;
}