// problema 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;



int main()
{

    int bills[10] = { 0,0,0,0,0,0,0,0,0,0 };
    string c_bills[10] = { "50000: ", "20000: ", "10000: ", "5000: ", "2000: ","1000: ", "500: ", "200: ", "100: ", "50: " };
    int a, b;
    cin >> a;
    b = a;
    while (b >= 50) {
        if (b >= 50000) {
            b -= 50000;
            bills[0] += 1;
        }
        else if (b >= 20000) {
            b -= 20000;
            bills[1] += 1;

        }
        else if (b >= 10000) {
            b -= 10000;
            bills[2] += 1;

        }
        else if (b >= 5000) {
            b -= 5000;
            bills[3] += 1;

        }
        else if (b >= 2000) {
            b -= 2000;
            bills[4] += 1;

        }
        else if (b >= 1000) {
            b -= 1000;
            bills[5] += 1;

        }
        else if (b >= 500) {
            b -= 500;
            bills[6] += 1;

        }
        else if (b >= 200) {
            b -= 200;
            bills[7] += 1;

        }
        else if (b >= 100) {
            b -= 100;
            bills[8] += 1;

        }
        else if (b >= 50) {
            b -= 50;
            bills[9] += 1;

        }
    }
    if (b > 0) {
        for (int i = 0; i < 10; i++) {
            cout << c_bills[i] << bills[i] << endl;
        }
        cout << "Faltante: " << b << endl;
    }
    else {
        for (int i = 0; i < 10; i++) {
            cout << c_bills[i] << bills[i] << endl;
        }
    }
}
