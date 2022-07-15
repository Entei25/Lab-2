

#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    b = "";
    for (int i = 0; i < a.length(); i++) {
        bool comp = true;
        for (int j = 0; j < b.length(); j++) {
            if (b[j] != a[i]) {
                comp = true;

            }
            else {
                comp = false;
                break;
            }
        }
        if (comp) {
            b += a[i];
        }
    }
    cout << b;
}