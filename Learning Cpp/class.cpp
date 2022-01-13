#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//class : lớp
// Thuộc tính : attribute
//Phương thức :method, behavior
// đối tượng : object 
// hàm tạo : contructer;
// //hamf hủy  : destructer 
//encapsulation : đóng gói 
// access modifier : 
// private :
//public:
// protected:
//static 
// friend function, friend class


class sinh_vien{
private:
	string id, ten, ns;
	int diem;
public:
	sinh_vien();// contructer
	sinh_vien(string, string, string, int);
	double gpa;
	void xin_chao();
	void di_hoc();
	~sinh_vien();// destructer
	void nhap();
	void in();
	int get_gpa() {
		return gpa; // return this-> gpa;
   }
	void  set_gpa(int n) {
		this->gpa = n;
	}
	friend void chuan_hoa(sinh_vien&);
};
// implementation

void sinh_vien :: xin_chao() {
	cout << "xin chao ";
}
void sinh_vien::di_hoc() {
	cout << " di hoc ";
}

void sinh_vien::nhap() {
	cout << " nhap  ID : "; cin >> id;
	cout << " nhap ten : "; getline(cin, ten);
	cout << " nhap  ngay sinh : "; cin >> ns;
	cout << " nhap diem : "; cin >> diem;
}
// dùng con tro  this
 sinh_vien :: sinh_vien(string id, string ten, string ns, int gpa) {
	this->id = id;
	this->ten = ten;
	this ->ns = ns;
	this->gpa = gpa;
 }
void sinh_vien::in() {
	cout << id << ' ' << ten << ' ' << ns << ' ' << diem << endl;
}
bool cmp(sinh_vien a, sinh_vien b) {
	return a.get_gpa() > b.get_gpa();

}

void chuan_hoa(sinh_vien& a) {
	string res = "";
	stringstream ss(a.ten);
	string token;
	while (ss >> token) {
		res += toupper(token[0]);
		for (int i = 0; i < token.length(); i++) {
			res += tolower(token[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	a.ten = res;
}
int main() {
	sinh_vien a[100];
	int n;
	cout << " nhap x "; cin >> n;

	for (int i = 0; i < n; i++) {
		a[i].nhap();

	}

	for (int i = 0; i < n; i++) {
		a[i].in();
	}


	return 0;
}