#include< iostream>
using namespace std;
template < class T>
int count(T A[], int n) {
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (!(A[i] & 1 ))// phep & la phep chi lay du 
			d++;
	}
	return d;
}
// mang tinh 
void even1(int A[], int n, int*& p) {
	int d= count<int>( A, n);
		p = new int [d];
		int j =0;
		for (int i = 0; i < n; i++) {
			if (!(A[i] & 1)) {
			//	p[j] = A[i];
				j++;
			}
		}
	
 }
	


int main() {
int	A[] = { 1,2,3,4,5,6,7,8,9};
cout << count< int>(A, 9);
}