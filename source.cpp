#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int a;
int b;
bool invalidInput;

int getNumbers() {
	cout << "Prosze podac liczbe a: ";
	cin >> a;
	if (!cin) {
		invalidInput = true;
	}
	else {
		invalidInput = false;
	}
	cout << "Prosze podac liczbe b: ";
	cin >> b;
	if (!cin) {
		invalidInput = true;
	}
	else {
		invalidInput = false;
	}

	return 0;
	
}

int 



int main() {
	getNumbers();
	if (invalidInput == true) {
		cout << "Podano nieprawidlowe liczby!" << endl;
		_getch();
	}
	else {
		cout << endl;
		cout << "Wybierz porzadek wyswietlania liczb: " << endl;
		cout << "Malejacy [1]" << endl;
		cout << "Rosnacy [2]" << endl;
		cout << "> ";
		cin >> choice2;
		if (choice2 == 1) {
			cout << "Wybrano porzadek malejacy." << endl;
			_getch();
		}
		if (choice2 == 2) {
			cout << "Wybrano porzadek rosnacy." << endl;
			_getch();
		}
		else {
			cout << "Wybrano nieprawidlowa odpowiedz!" << endl;
			_getch();
		}
	}
}
