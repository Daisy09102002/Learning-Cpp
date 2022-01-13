#include<iostream>
using namespace std;
template<class T , class OP>
void operation(T* p1, T* p2, T*& result, int n, OP op) {
	results = new T[n];
	for (int i = 0; i < n; i++) {
		result[i] = op(p1[i], p2[i]);
}
}
template < class T>
T add(T& a, T& b) {
	return a + b;
}
template< class T>
T minus(T& a, T& b) {
	return a - b;
}
template< class T>
T multify(T& a, T& b) {
	return a * b;
}
template< class T>
T divide(T& a, T& b) {
	return a / b;
}