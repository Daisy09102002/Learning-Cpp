#include<iostream>
using namespace std;
template < class T>
// cap phat dong thi phai dinh nghia toan tu gan =; va ham tao ban sao
class Array{
	int n;
	T* data;
public:
	//ham tao
	Array() {
		n = 0;
		data = nullptr;
	}
	Array(int a) {
		n = a;
		data = new T[n];
	}
	Array(int a,T b) {
		n = a;
		data = new T[n];
		for (int i = 0; i < n; i++) {
			data[i] = b;
		}
	}
	//ham tao ban sao
	Array(Array& a) {
		n= a.n;
		data = new T[n];
		for (int i = 0; i < n; i++) {
			data[i] = a.data[i];
		}

	}
	//dinh nghia toan tu gan
	Array& operator= ( const Array& a) {
		if (n != a.n) {
		//	delete[] data;
			n = a.n;
			data = new T[n];
		}
		for (int i = 0; i < n; i++) {
			data[i] = a.data[i];
		}
		return *this;
	}
	void display() {
		for (int i = 0; i < n; i++) {
			cout << data[i] << " ";
		}cout << endl;
	}
	void input() {
		cout << "Nhap so luong phan tu: "; cin >> n;
		data = new T[n];
		cout << "Nhap cac phan tu cua mang: " << endl;
		for (int i = 0; i < n; i++) {
			cout << "Phan tu [" << i + 1 << "]" << ": ";
			cin >> data[i];
		}

	}
	T get(int i) {
		if (i >= 0 && i < n)
			return data[i];
	}
	void set(int i, T d) {
		if (i >= 0 && i < n)
			data[i]=d;
	}
	~Array() {
		delete[] data;
	}
	T operator[] (int i) {
		if (i >= 0 && i < n) {
			return data[i];
		}
	}
	friend istream& operator>> (istream& in, Array& a) {
		cout << "Nhap so luong phan tu: "; in >> a.n;
a.data = new T[a.n];
		cout << "Nhap cac phan tu cua mang: " << endl;
		for (int i = 0; i < a.n;i++) {
			cout << "Phan tu [" << i + 1 << "]" << ": ";
		in >> a.data[i];
		}
		return in;
	}
		friend 	ostream& operator<<(ostream& out, Array& a) {
			for (int i = 0; i < a.n; i++) {
					out << a.data[i] << " ";
					}
					return out;
			}
//			T operator() (Array& a);
		friend Array& operator+ (Array& a, Array& b);
/*int min = (a.n > b.n) ? b.n : a.n;
		int max = (a.n > b.n) ? a.n : b.n;
		Array c(max);
		for (int i = 0; i <max ; i++){
			if (i < min) c.data[i] = a.data[i] + b.data[i];
			else
				(i >= a.n) ? (c.data[i] = a.data[i]) : (c.data[i] = b.data[i]);		
		}
		return c;

	}
	*/


};
int main() {
	Array< int> a(4, 1);
	Array<int> b(5, 1);
	Array <int> c = a + b;
	
	}
