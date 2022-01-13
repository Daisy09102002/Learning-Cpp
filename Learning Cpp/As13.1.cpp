#include<iostream>
#include<string>

using namespace std;
// 13 : Khai ba o cau truc Sach voi cac thuoci tinh: ten , nam xuat ban , tac gia
struct book {
	string name;
	int year;
	string author;

};
///14: Viet ham tra ve gia tri lon thu hai trong mang co N so nguyen
template < class T>
T max2(T* p, int n) {
	T temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (p[i] > p[j])
				temp = p[i];
			p[i] = p[j];
			p[j] = temp;
		}
	}
	for (int i = 0; i < n; i++) {
		if (p[i + 1] != p[i])
			return p[i + 1];
	
		else return p[i];
	}
}
//15: Viet ham tinh trung binh cong cua cac chu so trong mot so nguyen dương 
double tbc(int n) {
	int m = 0, i = 0;
	do {
		 m += (n % 10);
n /= 10;
i++;
	} while (n > 0);
	return (double)m / i;
}
// Phần 2 : Viết code
struct Image {
	int height, width;
	unsigned char** p;
public:
	// ham tao tham so mac dinh
	Image() {
		height = 0;
		width = 0;
		p = nullptr;
	}
	Image(int a, int b) {
		height = a;
		width = b;
		p = new unsigned char* [height];
		for (int i = 0; i < height; i++) {
			p[i] = new unsigned char[width];
		}

	}
	Image(int a, int b, unsigned char c) {
		height = a;
		width = b;
		p = new unsigned char* [height];
		for (int i = 0; i < height; i++) {
			p[i] = new unsigned char[width];
		}
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				p[i][j] = c;
			}
		}
	}
	~Image() {
		for (int i = 0; i < height; i++) {
			delete[] p[i];
		} delete p;
	}
	double Avg_brightness() {
		int sum = 0;
		for (int i = 0; i < height; i++) {
			for (int j = 0; i < width; j++) {
				sum += p[i][j];
			}
		}
		return (double)(sum / (height * width));
	}
	Image   Image_bit(int a) {
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				//(p[i][j] >= a) ? (p[i][j] = 1) : (p[i][j] = 0);
				if (p[i][j] >= a)
					p[i][j] = 1;
				else p[i][j] = 0;
			}
		} return *this;
	}
	void bit0_bit1() {
		int b0 = 0, b1 = 0;
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; i++) {
				if (p[i][j] == 0) b0++;
				if (p[i][j] == 1) b1++;
			}
		}
		cout << "So luong bit 0 : " << b0 << endl;
		cout << "So luong bit 1 : " << b1 << endl;
	}
	Image& add_black_square(int x0, int y0, int N) {
		for (int i = y0 - N / 2; i < y0 + N / 2; i++) {
			for (int j = x0 - N / 2; j < x0 + N / 2; j++) {
		//p[i][j] = 0;
				p[i][j] = 0;
			}
		}
		return *this;
	}
	void Show() {
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
		//cout << p[i][j] << " ";
		cout << (int)p[i][j] << " ";
		//cout << " " << p[i][j];
			}
			cout << endl;

		}
	}
};
int main() {
	/*nt b[5] = {4,5,6,72,3};
		int a[] = { 5,6,9,9,4,8 };
		cout << max2<int>(a, 6) << endl;
		cout << tbc(26);
		*/
	 Image a(10,10,1);
	 a.Show();
	 cout << endl;
	a.add_black_square(6, 6, 2);
	a.Show();
	//			for (int i = 0; i < 256; i++) {
	//				cout << i << "   " << (unsigned char)i << "   ";
	//				if ((i + 1) % 4 == 0) cout << endl;
	//			}
}