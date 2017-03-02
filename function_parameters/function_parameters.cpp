#include <iostream>
#include <string>

using namespace std;

void showMenu();
int getInput();
void processSelection(int);

int main() {

	showMenu();
	int selection = getInput();
	processSelection(selection);

	return 0;
}


void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;

	return;
}


int getInput() {
	int input;
	cin >> input;

	return input;
}

void processSelection(int option) {
	switch (option) {
	case 1:
		cout << "Searching ... " << endl;
		break;
	case 2:
		cout << "Viewing ... " << endl;
		break;
	case 3:
		cout << "Quitting ... " << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;
	}

}