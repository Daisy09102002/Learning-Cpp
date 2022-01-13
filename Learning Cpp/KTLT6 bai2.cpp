#include<iostream>
#include<string>
using namespace std;
class person {
	string  ten;
	int d, m, y;
	string  quequan;
public: 
	person(string ten, int d, int m, int y, string quequan) {
		this->ten = ten;
		 this-> d = d;
		 this->m = m;
		 this->y = y;
		 this->quequan = quequan;

	}
	person() {
		d = 0; m = 0; y = 0;
	}
	void nhap() {
		cout << " Nhap ten : ";
		getline(cin,ten);
		cout << " Nhap ngay sinh : ";
		cin >> d;
		cout << " Nhap thang sinh : ";
		cin >> m;
		cout << " Nhap nam sinh : ";
		cin >> y;
		cin.ignore();
		cout << " Nhap que quan :";
		getline(cin, quequan);
	}
	void Hien_thi() {
		cout << "============INFO=============" << endl;
		cout << " Ho va ten : " << ten << endl;
		cout <<" Ngay sinh : " << d << " / " << m << " / " << y << endl;
		cout << " Que quan: " << quequan;
	}
	string get_name(){
		return ten;
		}
	void set_name() {
		cout << "Nhap ten:";
		getline(cin, ten);

	}
	~person() {
		cout << endl << " Ham da bi huy ";
	}
};
int main() {
	person a;
	a.nhap();
	a.Hien_thi();
}