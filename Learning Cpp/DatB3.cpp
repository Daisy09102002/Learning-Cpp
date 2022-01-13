/*
Đề bài:
Xây dựng một lớp vecto gồm:
- Thuộc tinh:
	+ (size) : số phần tử
	+ Một con trỏ trỏ đến phần tử trong vecto
- Xây dưng phương thức:
	+ hàm thiết lập
	+ hàm hủy
	+ hàm sao chép
- Xây dựng toán tử
	+Khai báo toán tử * là hàm bạn của lớp vecto
		1. kiểm tra phép nhân vecto.
		2.Nhân một sô vô hướng với một vecto
		3. nhân vecto vs vecto
	=> kết quả trả về một vecto
	+Khai báo toán tử gán bằng =
- Xây dựng hàm main
	+ cho phép ng dùng sử dụng vecto vao tu ban phím
	+ Cho phép nguòi dùng thực hiện các phép toán nhân

	*/
#include<iostream>
using namespace std;
class vecto {
	int size;
	float* v;
public:
  /*/ vecto() {
		cout << " nhap so phan tu :";
		cin >> size;
		v = nullptr;
	}
	*/
	vecto() {}
	 void nhap() {
		 cout << " nhap so phan tu :";
		 cin >> size;
		 v = new float[size];
		 for (int i = 0; i < size; i++) {
			 cin >> v[i];
		 }
	 }
	~vecto(); // ham huy
	vecto(vecto&); // ham sao chep;
	friend vecto  operator* (vecto&, vecto&);
	friend vecto operator*(int k, vecto&);
	vecto& operator = (const vecto& a) {
		if (size != a.size)
			delete[] v;
		size = a.size;
		for (int i = 0; i < size; i++) {
			v[i] = a.v[i];
		}
		return *this;
	}


	int ktra(vecto&);
	void display();
};
vecto:: ~vecto() {
	delete[] v;
}
vecto::vecto(vecto& a) {
	if (size != a.size) {
		delete[] v;
	}
	size = a.size;
	v = new float[size];
	for (int i = 0; i < size; i++){
		v[i] = a.v[i];
}
	
}
 
int vecto::ktra(vecto&a){
	if (size = a.size) return 1;
	return 0;
}
vecto operator* (vecto&a,vecto&b){
	vecto c = a;
	if (a.ktra(b) == 1) {
		for (int i = 0; i < a.size; i++) {
			c.v[i] = a.v[i] + b.v[i];
		}
	}

	return c;
}
vecto operator*(int k, vecto& a) {
	vecto c;
	for (int i = 0; i < a.size; i++) {
		c.v[i] = k * a.v[i];
	}
	return c;
}




	

void vecto::display() {
	cout << "v=[";
	for (int i = 0; i < size- 1; i++){
		cout << v[i] << ",";
	}
	cout << v[size - 1] << "]";
}
int main() {
	vecto a, b;
	a.nhap();
	a.display();
	b.nhap();
	cout << endl;
	b.display();
	(a * b).display();
	return 0;
}