// labidk.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
	int n, sum;
	sum = 0;
	string a;
	cin >> n;
	cin >> a;
	if (a.length() % n != 0) {
		string zero = "";
		for (int j = 0; j < n - (a.length() % n); j++) {
			zero += "0";
		}
		zero += a;
		a = zero;
	}
	cout << a << endl;
	int count = 1;
	string aux = "";
	for (int x = 0; x < a.length(); x++) {
		aux += a[x];
		cout << aux << endl;
		if (count == n) {
			sum += stoi(aux);
			count = 1;
			aux = "";
		}
		else { count += 1; }
	}
	cout << sum << endl;

}