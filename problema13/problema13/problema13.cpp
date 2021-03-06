#include <iostream>
using namespace std;


template <size_t r, size_t c>
void mat(int(&arr)[r][c])
{
    int stars = 0;
    for (int i = 1; i < r - 1; i++)
    {
        for (int j = 1; j < c - 1; j++)
        { 
            if ((arr[i][j] + arr[i][j - 1] + arr[i][j + 1] + arr[i - 1][j] + arr[i + 1][j]) / 5 > 6) {
                stars++;
            }
        }
    }
    cout << stars << endl;
}

int main() {
    int arr[6][8] = { {0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0} };
    mat(arr);
}