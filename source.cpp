#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void  asca(int a, int b) 
{
	while (a <= b)
	{
		cout << a << " ";
		a++;
	}
}


void descb(int a, int b) 
{
	while (a <= b)
	{
		cout << b << " ";
		--b;
	}
}
void ascb(int a, int b) 
{
	while (a >= b)
	{
		cout << b << " ";
		b++;
	}
}
void desca(int a, int b) 
{
	while (a >= b)
	{
		cout << a << " ";
		--a;
	}
}

int errorHandler() {
	cout << "Podano nieprawidlowe dane!";
	_getch();
	return 0;
}

int main()
{
	SetConsoleTitle("Laboratorium 4 Zadanie 1");
	int numb; 
	int sets; 
	int x;
	x = 1;
	cout << "Podaj ilosc zestawow: ";
	cin >> sets;
	if (!cin) {
		errorHandler();
	}
	else {
		cout << endl;

		while (x <= sets)
		{
			int a;
			int b;
			cout << "Podaj liczbe a: ";
			cin >> a;
			if (!cin) {
				errorHandler();
			}
			else {
				cout << "Podaj liczbe b: ";
				cin >> b;
				if (!cin) {
					errorHandler();
				}
				else {
					cout << endl;
					cout << "Wybierz porzadek wypisywania liczb:" << endl;
					cout << "Malejaco [1]" << endl;
					cout << "Rosnaco [2]" << endl;
					cout << "> ";
					cin >> numb;
					if (!cin) {
						errorHandler();
						_getch();
						exit(1);
					}
					else {
						if (numb == 1)
						{
							if (a == b)
							{
								cout << a << "  " << a;
							}
							else
								if (a >= b)
								{
									desca(a, b);

								}
								else {
									descb(a, b);
									cout << endl;
								}

						}
						if (numb == 2)
						{
							if (a == b)
							{
								cout << a << "  " << a;
							}
							else
								if (a >= b)
								{
									ascb(a, b);
								}
								else {
									asca(a, b);
									cout << endl;
								}
						}
						x++;
						cout << endl;
					}
				}
			}
		}
	}
	_getch();
}
