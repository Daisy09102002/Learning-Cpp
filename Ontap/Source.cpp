#include<iostream>
using namespace std;
template<class T>
class Arr {
	int n;
	T* data;
public:
	// ham tao 
	Arr() {
		n = 0;
	}
	Arr(int n, T d) {
		this->n = n;
		data = new T[n];
		for (int i = 0; i < n; i++) {
			data[i] = d;
		}
	}
	Arr(int n) {
		this->n = n;
		
	}
	Arr(const Arr& a) {
		if (n != a.n) {
			delete[] data;
			n = a.n;
			data = new T[n];
		}
		for (int i = 0; i < n; i++) {
			data[i] = a.data[i];
		}
	}
	Arr& operator = (Arr& a) {
		if (n != a.n) {
			delete[] data;
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
		}
		cout << endl;
	}
	void input() {
		cout << " Nhap so phan tu cua mang: ";
		cin >> n;
		data = new T[n];
		cout << " Nhap cac phan tu cua mang : ";
		for (int i = 0; i < n; i++) {
			cin >> data[i];
		}
	}
	void set(int i, T d) {
		if (i >= 0 && i < n){
			data[i] = d;

}
	}
	T get(int i) {
		if (i >= 0 && i < n)
			return data[i];
	
		
	}
	T operator[] (int i) {
		if (i >= 0 && i < n)
			return data[i];
	}
	T operator()() {
		T max = data[0];
		for (int i = 0; i < n; i++) {
			if (data[i] > max)
				max = data[i];
		}
		return max;
	}
	Arr operator+ (Arr& a) {
		Arr b;
		b.n = n;
		b.data = new T[b.n];
		for (int i = 0; i < n; i++) {
			b.data[i] = data[i] + a.data[i];
		}
		return b;
	}
	Arr operator- (Arr& a) {
		Arr c;
		c.n = n;
		c.data = new T[n];
		for (int i = 0; i < n; i++) {
			c.data[i] = data[i] - a.data[i];
		}
		return c;
	}
	Arr operator * (Arr& a) {
		Arr c;
		c.n = n;
		c.data = new T[n];
		for (int i = 0; i < n; i++)
			c.data[i] = data[i] * a.data[i];
		return c;
	}
	friend istream& operator>> (istream& in,Arr& a) {
		cout << " Nhap so luong phan tu cua mang: ";
		in >> a.n;
		a.data = new T[a.n];
		cout << "Cac phan tu cua mang lan luot la: ";
		for (int i = 0; i < a.n; i++) {
			in >> a.data[i];
		}
		return in;
	}
	friend ostream& operator<<(ostream& out , Arr& a){
		out <"Day: ";
		for (int i = 0; i < a.n; i++){
			out << a.data[i] << " ";
		}
		
		return out;
	}

};
int main() {
	
	Arr<int> a(3, 2);
	Arr<int> b(3, 3);
	Arr<int> c = a + b;
	c.display();
	Arr<int> d = a - b;
	d.display();
	Arr<int> e = a * b;
	e.display();
	Arr<int> f;
	cin >> f;
	cout << f;

	
}