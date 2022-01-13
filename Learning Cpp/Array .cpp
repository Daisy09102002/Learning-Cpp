#include<iostream>
using namespace std;
class Array{
	int n;
	int* data;
public:
	Array(int n, int d) {
		this->n = n;
		data = new int[n];
		for (int i = 0; i < n; i++) {
			data[i] = d;
		}
	}
	Array(int n) {
		this->n = n;
		data = nullptr;
	}
	void hienthi() {
		cout << endl;
		for (int i = 0; i < n; i++)
			cout << data[i] << " ";
	}
	void set_data(int i, int d) {
		if ((i >= 0) && (i < n))
			data[i] = d;
	}
	Array(const Array& a) {
		n = a.n;
		data = new int[n];
		for(int i = 0; i < n; i++) {
			data[i] = a.data[i];
		}
	}
	Array& operator= ( Array a){
		if (n != a.n)
			delete[] data;
		n = a.n;
		data = new int[n];
		for (int i = 0; i < n; i++) {
			data[i] = a.data[i];
		}
		return *this;
	}
	~Array() {
		cout << endl << "Ham da bi huy";
	}
};
int main() {
	Array a(5, 1);
	a.hienthi();
	Array b(a);
	b.set_data(0, 10);
	b.hienthi();
	a.hienthi();  
	/* sau khi thay doi b thi a cung bi thay doi theo vi k dinh 
	nghia ham tao ban sao
	*/
	Array c(2, 9);
	c.hienthi();
	c = a;
	c.hienthi();
}