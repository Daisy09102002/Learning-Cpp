// Learning Cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<conio.h>
using namespace std;
int giaithua(int n)
{
	int kq = 1;
	while (n > 1)
		kq = kq * (n--);
	return kq;
}
int main() {

	char c;
	int N = 1;
	do {
		cout << " nhap vao mot so nguyen : " << endl;
		cin >> N;
		cout << " giai thua cua " << N << " la " << giaithua(N) << endl;
		cout <<" ban muon tiep tuc khong? Y/N " << endl;
		cin >> c;

	} while (c == 'y' || c == 'Y');
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
