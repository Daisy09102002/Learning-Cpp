#include <iostream>
using namespace std;
/*
bài 1 : lop complex
*/
class complex {
	double im, re;
public:

	complex(double T, double A) {
		re = T;
		im = A;
	}
	void set_re() {
		cout << "Nhap phan thuc:";
		cin >> re;
	}
	void Set_im() {
		cout << "Nhap phan ao: ";
		cin >> im;
	}
	double get_re() {
		return re;
	}
	double get_im() {
		return im;
	}
	void Hien_thi() {
		cout << "So phuc: ";
		if (im == 0 && re == 0) {
			cout << 0;
		}
		if (im < 0) cout << re << im << "i";
		else cout << re << " + " << im << "i";
	}
	void get_re_im(double& thuc, double& ao) {
		thuc = re;
		ao = im;
	}

	void set_im_re(double T, double A) {
		re = T;
		im = A;
	}
	complex sum(complex a) {
		return complex(re + a.re, im + a.im);
	}
};
int main() {
	double T, A;
	complex a(2, 5), b(1, 2);
	complex c = a.sum(b);
	c.Hien_thi();



}