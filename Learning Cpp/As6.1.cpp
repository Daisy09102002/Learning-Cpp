#include<iostream>
using namespace std;
void cap_phat(int**& a, int m, int n) {
	a = new int* [m];
	for (int i = 0; i < m; i++) {
		a[i] = new int[n];
	}
}

void thu_hoi(int** a, int m, int n) {
	for (int i = 0; i < m; i++) {
		delete[] a[i];
	}delete[] a;
}
void read_array(int**& a, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Phan tu thu a" << "[" << i << "]" << "[" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void hien_thi(int**& a, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << '\t';
		}cout << endl;

	}
}
int main() {
	int** a;
	int m, n, max;
	cout << " nhap so hang :";
	cin >> m;
	cout << " nhap so cot :";
	cin >> n;
	cap_phat(a, m, n);
	read_array(a, m, n);
	hien_thi(a, m, n);
}