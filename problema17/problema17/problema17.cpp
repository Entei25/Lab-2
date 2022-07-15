

#include <iostream>
using namespace std;

int main()
{
	int n;
	int ami = 0;
	int sumt = 0;
	cin >> n;

	for (int i = 2; i < n; i++) {
		int fake = i;
		for (int j = i + 1; j <= n; j++) {
			int sumi = 0, sumj = 0;
			for (int k = 1; k < i; k++) {
				if (i % k == 0) {
					sumi += k;
				}
			}
			for (int h = 1; h < j; h++) {
				if (j % h == 0) {
					sumj += h;
				}
			}
			if (i == sumj && j == sumi) {
				sumt += sumj + sumi;
			}
		}

	}
	cout << sumt << endl;
}