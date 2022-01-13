/*
Nạp chông toán tử số phức:

*/

#include<iostream>
using namespace std;
class complex {
	double im, re;
public:
	complex() {
		re = 0; im = 0;
	}
	complex(double im, double re) {
		this->im = im;
		this->re = re;
	}
	void hien_thi() {
		if ((im == 0) && (re == 0)) cout << "0 " << endl;
		if (im < 0) cout << re << " " << im << "i" << endl;
		else cout << re << " + " << im << "i" << endl;
	}
	friend istream& operator>>(istream&, complex&);
	friend ostream& operator<< (ostream&, complex&);
	complex operator+ (complex );
	complex operator-(complex );
	complex operator * (complex );
	complex operator / (complex );
	complex operator += (complex );
	complex& operator -= (complex );
};
complex complex :: operator+ (complex a) {
	return complex(re + a.re, im + a.im);
}
complex complex:: operator - (complex a) {
	return complex(re - a.re, im - a.im);
}
complex complex:: operator+=(complex a) {
	
	complex c(re + a.re, im + a.im);
		return c;
}
istream& operator>>(istream& in, complex&a) {
	cout << " Nhap phan thuc :";
	in >> a.re;
	cout << " Nhap phan ao : ";
	in >> a.im;
	return in;
}
ostream& operator<< (ostream& out, complex&a){
	if ((a.im == 0) && (a.re == 0))
		cout << "0";
	if (a.im < 0) cout << a.re << " " << a.im << "i" << endl;
	else cout << a.re << " + " << a.im << "i" << endl;
	return out;

}

int main() {
	complex a(1, 1), b(2, 4);
	complex c = a + b;
	(a.operator+(b)).hien_thi();
	cout << endl;
	c.hien_thi();
	cout << endl;
	(a.operator+=(b)).hien_thi();
	cout << endl;
	a.hien_thi();
	complex d;
	cin >> d;
	cout << d;

}