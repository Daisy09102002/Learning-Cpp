#include<iostream>
#include<math.h>
using namespace  std;

void change(int n, int a, int d, int  A[]) {
	for (int i = 0; i < n; i++) {
		if (A[i] == a)
			A[i] = d;
	}
}
struct point {
	float x, y;
};
float  len( point& a, point & b){
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
	
}
void change2(point& a, float c, float b) {
	a.x = c;
	a.y = b;
}
int main() {
	int A[] = { 1,2,3,4,5,6 };
	change(6, 2, 4, A);
	for (int i = 0; i < 6; i++) {
		cout << A[i];
	}
	cout << endl;
	point a, b;
	a.x = 2; a.y = 2;
	b.x = 3;
	b.y = 3;
	cout << len(a, b);
	change2(a, 4, 5);
	cout << endl;
	cout << a.x;
}