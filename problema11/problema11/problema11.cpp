// p5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;



int main()
{
	bool comp = true;
	int menu = 0;
	char a;
	int b, c, d;
	string mat[15][20];
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 20; j++) {
			mat[i][j] = "-";
		}
	}
	while (comp) {
		cout << "Select the number of the action that you want to do:" << endl << endl << "1.Make a reservation" << endl << "2.Cancel a reservation" << endl << "3.Exit" << endl;
		cin >> menu;
		if (menu == 1) {
			cout << "please enter the number of the site you want to reservert" << endl << "row: ";
			cin >> a;
			cout << "column: ";
			cin >> b;
			c = int(a) - 65;
			if (c < 0 || c>14 || b < 0 || b>19) {
				cout << "please enter a valid site" << endl;
			}
			else {
				mat[c][b - 1] = "+";
			}
		}
		else if (menu == 2) {
			cout << "please enter the number of the site you want to cancel" << endl << "row: ";
			cin >> a;
			cout << "column: ";
			cin >> b;
			c = int(a) - 65;
			if (c < 0 || c>14 || b < 0 || b>19) {
				cout << "please enter a valid site" << endl;
			}
			else {
				mat[c][b - 1] = "-";
			}
		}
		else if (menu == 3) {
			comp = false;
		}
		else { cout << "Please enter a valid character" << endl; }
	}
}
