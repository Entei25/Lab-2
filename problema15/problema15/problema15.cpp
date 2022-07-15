#include <iostream>

using namespace std;

int *collision(int[], int[]);

int main() {
	int a[] = { 2,6,2,2 };
	int b[] = { 5,2,2,2 };

	int *c;
	c = collision(a, b);
	for (int i = 0; i < 4; i++) {
		cout << c[i] << endl;
	}
}

int *collision(int a[], int b[]) {
	bool comp = false;
	// {x,y,width,height}
	// {((i1+a[0])/2,(i2+a[1])/2) }
	// i1 = a[0]+a[2]
	// i2 = a[1]-a[3]
	int reca[] = { (((a[0] + a[2]) + a[0]) / 2,((a[1] - a[3]) + a[1]) / 2) };
	int recb[] = { (((b[0] + b[2]) + b[0]) / 2,((b[1] - b[3]) + b[1]) / 2) };
	// rec = {cax,cay}

	if (abs(b[0] - a[0]) <= ((a[2]) / 2) + ((b[2]) / 2) && abs(b[1] - a[1]) <= ((a[3]) / 2) + ((b[3]) / 2)) {
		comp = true;
		int x = a[0] > b[0] ? a[0] : b[0];
		int y = a[1] < b[1] ? a[1] : b[1];
		int width = (a[0] + a[2]) < (b[0] + b[2]) ? (a[0] + a[2]) : (b[0] + b[2]);
		int height = (a[1] - a[3]) > (b[1] - b[3]) ? (a[1] - a[3]) : (b[1] - b[3]);
		static int spositionrec[4] = { x, y,abs(width-x),abs(height-y) };
		cout << "[" << spositionrec[0] << "," << spositionrec[1] << "," << spositionrec[2] << "," << spositionrec[3] << "]" << endl;
		return spositionrec;
	}
	else {
		cout << "theres no intersection between the two rectangles" << endl;
		static int null[4] = {0,0,0,0};
		return null;
		
	}
	
}