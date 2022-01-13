// mang 2 chieu
#include<iostream>
using namespace std;
void cap_phat(int**& a,int row, int col){
	a = new int*[row];
	for (int i = 0; i < row;i++) {
		a[i] = new int[col];
	}
}
void thu_hoi(int**& a, int row, int col) {
	for (int i = 0; i < row; i++) {
		delete[] a[i];
	}delete[] a;
}

	void input(int**& a, int row, int col) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << "Phan tu [" << i << "]" << "[" << j << "]" << " ";
				cin >> a[i][j];
			}
		}
	}
	void output(int**& a,int row, int col) {
		for (int i = 0; i < row; i++){
			for (int j =0; i < col; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		
	}
	//sum 
	int sum(int**& a, int row, int col) {
		int s = 0;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				s += a[i][j];
			}
		}return s;
	}
int main() {
	// cap phat mang dong 2 chieu
	int** p;
	int row, col;
	cout << "Nhap so hang: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> col;
	cap_phat(p, row, col);
	input(p, row, col);
	output(p, row, col);
			
	
}