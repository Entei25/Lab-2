// problema5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;



string intost(int*);

int main()
{
	int a = 234623;
	string b = intost(&a);
	cout << b << endl;
   
}

string intost(int* a) {
	char num[] = { '0','1','2','3' ,'4' ,'5' ,'6' ,'7' ,'8' ,'9' };
	string st = "";
	bool mi = false;
	if (*a < 0) {
		mi = true;
		*a = -*a;
	}
	do {
		st = num[*a % 10] + st;
		*a /= 10;
	} while (0 < *a);
	if (mi) {
		st = "-" + st;
	}
	return st;
}