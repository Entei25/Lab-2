//

#include <iostream>
using namespace std;

bool compare(string, string);

int main()
{
    string a, b;
    a = "good";
    b = "god";
    cout << compare(a, b) << endl;
}

bool compare(string a, string b) {
    bool conp = true;
    if (a.length() != b.length()) {
        conp = false;
    }
    else {
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == b[i]) {
                continue;
            }
            else {
                conp = false;
                break;
            }
        }
    }
    return conp;
}
