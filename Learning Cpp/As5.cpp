#include< iostream>
using namespace std;
int count_odd(int* p, int n) {
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (p[i] & 1)
			d++;

	}return d;
}
int count_even(int* p, int n) {
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (!(p[i] & 1))
			d++;
	}
	return d;
}
void display_odd(int* p, int n, int *& odd) {
	int d = count_odd(p, n);
	odd = new int[d];
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (p[i] % 2)
		{
			odd[j] = p[i];
			j++;
		}
	}
	for (int i = 0; i < d; i++) {
		cout << odd[i] << " ";
	}
	delete[] odd;
	delete[] p;
}
void display_odd2(int*& p, int*& odd) {
	int n;
	cout << " nhap so luong phan tu : ";
	cin >> n;
	p = new int[n];
	for (int i = 0; i < n; i++) {
		cout << " Phan tu thu " << i + 1 << ":";
		cin >> p[i];
	}
	int d = count_odd(p, n);
	odd = new int[d];
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (p[i] % 2)
		{
			odd[j] = p[i];
			j++;
		}
	}
	for (int i = 0; i < d; i++) {
		cout << odd[i] << " ";
	}
	delete[] odd;
	delete[] p;
	
	
}
void nhap(int* p, int&n ){
	
	for (int i = 0; i < n; i++) {
		cout << "Phan tu thu: " << i + 1 << " ";
		cin >> p[i];

	}
}
template< class T>
void xuat(T* p, int&n)
{
	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";

	}cout << endl;
}
void sum(int*& p, int* a, int* b, int n) {
	p = new int[n];
	for (int i = 0; i < n; i++) {
		p[i] = a[i] + b[i];
	}
}
void reverse(double a[], const int n , double*& rev){
	rev = new double[n];
	int j = 0;
	for (int i=n-1; i >= 0; i--) {
		rev[j] = a[i];
		j++;
			;
	}

}
void even_odd1(int n, int* a, int*&odd, int*&even) {
	int d1 = count_odd(a, n);
	int d2 = count_even(a, n);
	odd = new int[d1];
	even = new int[d2];
	int j = 0,k = 0;
	for (int i = 0; i < n; i++) {
		(a[i] & 1) ? (odd[j] = a[i], j++) : (even[k] = a[i], k++);
	}
}
int main() {
	/*
int	A[5] = { 1,2,3,4,5 };
int* p;
display_odd(A, 5, p);

int d = count_odd(A,5);
for (int i = 0; i < d; i++) {
	cout << p[i] << " ";
	}
*/
	/*
	int* a;
	int* b;
	int* c;

	int n;
cout << " Nhap so luong phan tu: ";
cin >> n;
a = new int[n]; b = new int[n];

nhap(a, n);
//xuat(a, n);
nhap(b, n);
sum(c, a, b, n);
xuat(c, n);
*/

/*double a[5] = {1.3, 1.4 , 1.5 , 1.6, 1.7};
	double* rev;
	reverse(a, 5, rev);
	int n = 5;
	xuat<double>(rev, n);
	*/
	int* a;
	int* odd;
	int* even;
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	a = new int[n];
	nhap(a, n);
	int d1 = count_odd(a, n);
	int d2 = count_even(a, n);
	even_odd1(n, a, odd, even);
	xuat(odd, d1);
	xuat(even, d2);
}

