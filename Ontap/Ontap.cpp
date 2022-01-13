
#include <iostream>
using namespace std;
template <class T>
T Tim_Max(T* p, int n) {
	T Max = p[0];
	for (int i = 0; i < n; i++) {
		if (p[i] > Max)
			Max = p[i];
	}
	return Max;
}
template < class T>
T tim_min(T* p, int n) {
	T min = p[0];
	for (int i = 0; i < n; i++) {
		if (p[i] < min)
			min = p[i];
	}
	return min;
}
template < class T>
T tim_abs_max(T* p, int n) {
	T max = abs(p[0]);
	for (int i = 0; i < n; i++) {
		if (abs(p[i]) > max)
			max = abs(p[i]);
	}
	return max;
}
template < class T>
T tim_abs_min(T* p, int min) {
	T min = abs(p[0]);
	for (int i = 0; i < n; i++) {
		if (abs(p[i]) < min)
			min = abs(p[i]);
	}
	return min;
}
template < class T>
class Arr {
	int bac;
	T* p;
public:
	// ham tao
	Arr() {
		bac = 0;
	}
	Arr(int n) {
		bac = n;
		 p = new T[n];
		 
	}
	Arr(int n, T d) {
		bac = n;
		p = new T[n];
		for (int i = 0; i < n; i++) {
			p[i] = d;
		}
	}
	// ham tao ban sao
	Arr(Arr& a) {
		bac = a.bac;
		p = new T[n];
		for (int i = 0; i < n; i++) {
			p[i] = a.p[i];
		}
	}
	// ham toan tu gan = 
	 Arr& operator = ( const Arr& a){
		 if (bac != a.bac)
			 delete p[];
		 bac = a.bac;
		 p = new T[bac];
		 for (int i = 0; i < n; i++) {
			 p[i] = a.p[i];
		 }
// ham hien thi
	 void display() {
		 for( int i =0 ; i< n ;i++){
			 cout << p[i] << " ";
	 }

	
};
	 int main() {

	 }
