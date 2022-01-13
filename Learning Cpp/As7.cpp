#include<iostream>
#include<string>
using namespace std;
//========================
template < class T>
class Complex {
	T im, re;
public:
	Complex(T a, T b) {
		re = a;
		im = b;
	}
	Complex() {
		re = 0; im = 0;
	}
	void input();
	void output();
	T  get_re();
	void set_re(T);
	T get_im();
	void set_im(T i);
	T get_im_re( T& , T& );
	void set_im_re(T , T );
//	friend Complex operator+(Complex&, Complex&);
	Complex sum(Complex b) {
	//	Complex c;
	//	c.re = re + b.re;
	//	c.im = im + b.im;
		return Complex (re + b.re, im + b.im);
		// ca 2 cach deu ok
	}

};
//template < class T>
//Complex<T> operator+ (Complex& a, Complex& b) {
//	return Complex<T> (a.re + b.re, a.im + b.im);
//
template < class T>
void Complex<T>::input() {
	cout << "Nhap phan thuc: ";
	cin >> re;
	cout << "Nhap phan ao: ";
	cin >> im;
	
}
template< class T>
void Complex<T>::output() {
	(im > 0) ? (cout << re << "+" << im << "i") : (cout << re << im << "i");
}
template < class T>
T Complex<T> ::get_re() {
	return re;
}
template < class T> 
void Complex<T> ::set_re(T n) {
	re = n;
}
template< class T>
T Complex<T>::get_im() {
	return im;
}
template < class T>
void Complex<T>::set_im(T n) {
	im = n;
}
template< class T >
void Complex<T>::set_im_re(T a, T b) {
	re = a;
	im = b;
}
template< class T >
T Complex<T>::get_im_re(T& a, T& b) {
	a = re; 
	b = im;
}

/*int main() {
	Complex<float> a;
	Complex<float> b;
	a.input();
	b.input();
	(a.sum(b)).output();
}
*/
//===============================
class Person
{
	string name;
	string que;
	int ngay, thang, nam;
	static int d;
public:
	Person(string, string, int, int, int);
	Person() {
		ngay = 0;
		thang = 0;
		nam = 0;
		d++;
	}
	void input();
	void output();
	string get_name();
	string get_que();
	void get_birth();
	void set_name(string);
	void set_que(string);
	void set_birth(int, int, int);
	void static tong();
	~Person();


};
 int Person::d = 0; // bien static bat buoc dinh nghia ngoai class
 Person:: ~Person() {
	 d--;
 }
 void Person::set_birth(int a, int b, int c) {
	 ngay = a;
	 thang = b;
	 nam = c;
 }
 void Person::set_que(string q) {
	 que = q;
 }
 void Person::set_name(string a) {
	 name = a;
 }
 void Person::get_birth() {
	 cout << "Ngay sinh: " << ngay << "/" << thang << "/" << nam << endl;
 }
void Person::tong() {
	 cout << "Tong so nguoi: " << d;
 }
string Person::get_que() {
	return que;
}
void Person::output() {
	cout << "========INFO=========" << endl;
	cout << "Ten: " << name << endl;
	cout << "Que: " << que << endl;
	cout << "Ngay sinh: " << ngay << "/" << thang << "/" << nam << endl;

}
string Person::get_name() {
	return name;
}
void Person::input() {
	do {
		cout << "Nhap ten: ";
		getline(cin, name);
	} while ((get_name()).length() > 51);
	do {
		cout << "Nhap que quan: ";
		getline(cin, que);
	} while ((get_que()).length() > 100);
	cout << "Nhap ngay sinh: "; cin >> ngay;
	cout << "Nhap thang sinh: "; cin >> thang;
	cout << "Nhap nam sinh: "; cin >> nam;
}
Person::Person(string a, string b, int c, int d, int e) {
	name = a;
	que = b;
	ngay = c;
	thang = d;
	nam = e;
	this->d++;
}
//===================================
class Date {
	int d, m, y;
public:
	Date(int d, int m, int y);
	Date();
	int get_day();
	int get_month();
	int get_year();
	void get_date();
	void set_d( int);
	void set_m(int);
	void set_y(int);
	void input();

};
Date::Date(int a, int b, int c) {
	d = a;
	m = b;
	y = c;
}
Date::Date() {
	d = 0; m = 0; y = 0;

}
int Date:: get_day() {
	return d;
}
int Date::get_month() {
	return m;
}
int Date::get_year() {
	return m;
}
void Date::get_date() {
	cout << d << "/" << m << "/" << y << endl;
}
void Date::set_d(int a) {
	d = a;
}
void Date::set_m(int a) {
	m = a;
}
void Date::set_y(int a) {
	y = a;
}
void Date::input() {
	cout << "Nhap ngay sinh: "; cin >> d;
	cout << "Nhap thang sinh: "; cin >> m;
	cout << "Nhap nam sinh: "; cin >> y;

}
//================================
class Person2 {
	string name;
	string que;
	Date a;
public:
	Person2();
	Person2(string, string, int, int, int);
	void output();
	void input();
};
 Person2::Person2() {
	Date(0, 0, 0);
}
Person2::Person2(string o, string b, int x, int y, int z) {
	name = o;
	que = b;
    this->a.set_d(x);
    this->a.set_m(y);
	this->a.set_y(z);
//	Date a(x,y,z);     ngay sinh hien ra mac dinh 0/0/0

}
void Person2::output() {
	cout << "Ten: " << name << endl;
	cout << "Que Quan: " << que << endl;
	cout << "Ngay sinh: ";
	a.get_date();
}
void Person2::input() {
	cout << "Nhap ten: ";
	getline(cin, name);
	cout << "Nhap Que Quan: ";
	getline(cin, que);
	this->a.input();

}
/*int main() {
	//Person a1, a2, a3, a4;
	//a1.input();
	//a1.output();
//	Person::tong();
//	Person2 a("Nguyen Thi Tam", " ha Noi",9, 10, 2002);
//	a.output();
	Person2 b;
	b.input();
	b.output();
}*/
//=============================
class Person3 : public Date {
	string ten;
	string que;
public:
	Person3();
	Person3(string, string, int, int, int);
	void input();
	void output();
};
Person3::Person3() {
	Date();
  }
Person3::Person3(string name, string home, int a, int b, int c) : Date(a, b, c) {
	ten = name;
	que = home;
}
 void Person3::input() {
	 cout << "Nhap ten: ";
	 getline(cin, ten);
	 cout << "Nhap Que Quan: ";
	 getline(cin, que);
	 Date::input();

}
 void Person3::output() {
	 cout << "Ten: " << ten << endl;
	 cout << "Que Quan: " << que << endl;
	 cout << "Ngay sinh: ";
	 Date::get_date();

 }
int main() {
	Person3 a;
	a.input();
	a.output();
}