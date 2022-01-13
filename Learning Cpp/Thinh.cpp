#include<iostream>
using namespace std;

// nhiem vu2 
void Tong(int a[], int n,int & s ) {

	for (int i = 0; i < n; i++) {
		s = s + a[i];
	}cout << " tong la " << s;
}

// nhiem vu 3 
unsigned int Count(int A[], unsigned int n , int x) { // so lien xuat hiẹn mot so trong mang
	unsigned int temp = 0;
	for (int i = 0; i < n; i++)
		if (A[i] == x)
			temp++;
	return temp;
}
//tim phan tu xuat hien nhat lan nhat trong A
unsigned int index (int A[], unsigned int n) {
	unsigned int temp1, temp = Count(A, n, A[0]), index = 0;
	for (int i = 1; i < n; i++)
	{
		temp1 = Count(A, n, A[i]);
		if (temp < temp1)
		{
			temp = temp1;
			index = i;
		}
	}
	return index ;
}
int main() {
	int a[100];
	int n, s = 0;
	do {
		cout << " nhap size: ";
		cin >> n;

	} while (n <= 0 | n >= 100);

	for (int i = 0; i < n; i++) {

		cout << " nhap gia tri thu " << i + 1;
		cin >> a[i];
		while (a[i] < 0 || a[i]>490) {
			cout << " nhap gia tri thu " << i + 1;
			cin >> a[i];
		}
	}

	// in ra tong cua mang 
	Tong(a, n, s);
	cout << " chi so cua phan tu xuat hien nhieu nhat trong mang la :" << index;

}