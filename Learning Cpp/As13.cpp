#include<iostream>
using namespace std;
class image {
	int cao, rong;
	char** p;

public:
	// ham tao co doi 
	image(int, int, char);
	image();
	// ham tao ban sao
	image(image&);
	// ham gan toan tu = 
	image operator=(image&);
	// ham nap chong toan tu >>
	friend istream& operator>> (istream& , image&);
	// nap chong >>
	friend ostream& operator<<( ostream&, image&);
	//hàm tính độ sáng trung bình cảu ảnh;
	double do_sang();
	//Hàm chuyển ảnh về giaa trị nhị phân
	void nhi_phan(int);
	//hàm tính toán số bit 0 và bit1 sau khi chuyển ảnh thành nhị phân
	void tinh_bit();
	/*Hàm  thay đổi cấu trúc ảnh bằng cách vẽ vao ảnh một hình vuông màu đen có
	tâm tại (x0, y0),cạnh là N điểm ảnh.hàm đầu vao  là ảnh , điểm ( x0, y0),
	cạnh N, đầu ra là ảnh thu được;

	*/
friend	image cau_truc(int, int, int, image&);

};

image::image(int cao, int rong, char c) {			// ham tao 1;
	this->cao = cao;
	this->rong = rong;
	p = new char* [cao];
	for (int i = 0; i < cao; i++) {
		p[i] = new char[rong];
	}
	for (int i = 0; i < cao; i++) {
		for (int j = 0; j < rong; j++) {
			p[i][j] = c;
		}
	}
}													// ham tao 2;
image::image() {
	cao = 0;
	rong = 0;
	p = new char* [cao];
	for (int i = 0; i < cao; i++) {
		p[i] = new char[rong];
	}
}

image::image(image& a) {						// ham tao ban sao
	this->cao = a.cao;							// chạy ok rồi
	this->rong = a.rong;
	p = new char* [cao];
	for (int i = 0; i < cao; i++) {
		p[i] = new char[rong];
	}
	for (int i = 0; i < cao; i++) {
		for (int j = 0; j < rong; j++) {
			p[i][j] = a.p[i][j];
		}
	}

}
image image :: operator=(image& a) {					// nap chong toan tu =
	if ((cao != a.cao) || (rong != a.rong)) {			//chạy ok rồi;
		this->cao = a.cao;
		this->rong = a.rong;
	}
	p = new char* [cao];
	for (int i = 0; i < cao; i++) {
		p[i] = new char[rong];
	}
	for (int i = 0; i < cao; i++) {
		for (int j = 0; j < rong; j++) {
			p[i][j] = a.p[i][j];
		}
	}
	return *this;
}
 istream& operator>> (istream& in, image& a) {	   // nap chong >>;
	 for (int i = 0; i < a.cao; i++) {				// hàm này vẫn lỗi
		 delete[] a.p[i];
	 }
	 delete[] a.p;
	 cout << "Nhap chieu cao cua anh: ";
	 in >> a.cao;
	 cout << "Nhap chieu rong cua anh: ";
	 in >> a.rong;
	 cout << "Nhap du lieu diem anh: ";
	 a.p = new char* [a.cao];
	 for (int i = 0; i < a.cao; i++) {
		 a.p[i] = new char[a.rong];
	 }

	 for (int i = 0; i< a.cao; i++) {
		 for (int j = 0; j < a.rong; j++) {
			 cout << "Phan tu p[" << i << "]" << "[" << j << "]";
			 in >> a.p[i][j];
		}
	 }
	 return in;
}
 ostream& operator<<(ostream& out, image& a) {			// ham nap chong <<
	 out << "Anh thu duoc : " << endl;					// chạy ok rồi
	 for (int i = 0; i < a.cao; i++) {
		 for (int j = 0; j < a.rong; j++) {
			 out << a.p[i][j] << " ";
		 }
		 out << endl;
	 }
	 return out;
 }
 double image::do_sang() {						// hàm tính độ sáng trung bình của ảnh
	 double s = 0.0;
	 for (int i = 0; i < cao; i++) {
		 for (int j = 0; j < rong; j++) {
			 s += p[i][j];
		 }
	 }
	 return double(s /(double)(cao * rong));
 }
 void image::nhi_phan(int d) {                           // chạy  ok 
	 for (int i = 0; i < cao; i++) {
		 for (int j = 0; j < rong; j++) {
			 if (p[i][j] > d) {
				 p[i][j] = 1;
			 }
			 else p[i][j] = 0;
		 }
	 }
 }
 void image::tinh_bit() {
	 int bit0 = 0, bit1 = 0;
	 for (int i = 0; i < cao; i++) {			//chạy ok rồi;
		 for (int j = 0; j < rong; j++) {
			 if (p[i][j] == 1) {
				 bit1++;
			 }
			 else bit0++;
		 }
	 }
	 cout << "So luong bit0 la: " << bit0 << endl;
	 cout << "So luong bit1 la : " << bit1;
 }
 image cau_truc(int x0, int y0, int N, image& a)
 {
	
	 for (int i =(x0 - N/2) ; i < (x0 + N / 2); i++) {
		 for (int j = (y0 - N / 2); j < (y0 + N / 2); j++) {
			 a.p[i][j] = 0;
		}
	 }
	 return a;
 }
 int main() {
	 image a(10, 10, 4);
	 cout << a;
	 
	
 }