#include<iostream>
using namespace std;
/*
đề bài :Xây dựng một lớp hóa đơn gồn 2 dữ liệu là mshd(mã số hóa đơn)
và tien( số tiền của hóa đơn) với các hàm thưc hiện chức năng sau:
- Hàm tạo hóa đơn
- Hàm hủy hóa đơn
- Hàm sửa nội dung hóa đơn 
- Hàm in ra tổng số hóa đơn và tổng số tiền bán sau các thao tác tạo , hủy , sửa hóa đơn
- Viết hàm main chạy các hàm trên.

*/

/*
Phân tích đề:
- Giống như việc quét mã vạch để tính tiền khi đi siêu thị, mỗi mặt hàng có 1 mã số
khác nhau và mỗi mặt hàng có giá thành khác nhau
=>Đối tượng hóa đơn có hai thuộc tính: mshd và tien;
-Một lần khách mua hàng thì sẽ mua nhiều mặt hàng , mỗi 
mặt hàng 1 hóa đơn con, tổng các hóa đơn con lại thì ra tổng số tiền phải trả
=Đểbiết có bao nhiêu hóa đơn, và tổng số tiền là bao nhiêu thì cần có biến đếm
và biến tính tổng tiền dùng cho toàn bộ class
=> dùng biến static
=>Mỗi khi có một hóa đơn mới thì số hóa đơn bé tăng lên và số tiền cũng
tăng lên => Biến static sẽ tăng ngay khi khởi tạo một hóa đơn mới.
- Khi khách hàng không mua một món đồ nữa thì họ sẽ không cân phải trả tiền cho món
đồ đó nữa => Hàm hủy bây giờ sẽ đong vai trò giảm số lượng hóa đơn và lấy số tiền tổng
cần phải trả trừ đi số tiền của cái hóa đơn bị hủy này.
-Trong trường hợp siêu thị niêm yết giá sai thì phải sửa hóa đơn: cụ thể là sửa giá tiền
của mặt hàng đó => Gọi hàm sửa
=> Hàm sửa sẽ xóa số tiền cũ đi và gán giá tiền mới cho mặt hàng đó, đồng thời sửa tổng số
tiền cần phải trả luôn.
*/
class HD {
	int mshd;
	int tien;
	static int count;
	static int tongtien;
public:
	HD(int mshd = 0, int tien = 0) {
		count++;
		this->mshd = mshd;
		this->tien = tien;
		tongtien += tien;
	}
	~HD() {
		count--;
		tongtien -= tien;
	}
	void sua(int tien) {
		tongtien -= this->tien;
		this->tien = tien;
		tongtien += tien;

		
	}
	void static  in_hoa_don() {                   // ham su dung cac bien tinh thi phai dinh dang tinh
		cout << "Tong so hoa don :" << count << endl;
		cout << "tong so tien phai tra : " << tongtien << endl;
	}
};
 int HD::count = 0;           // dinh nghia bien static ngoai lop 
 int HD::tongtien = 0;
 int main() {
	 HD a(1, 3), b(2, 9), c(3, 5);
	 HD::in_hoa_don();
	 a.sua(5);
	 HD::in_hoa_don();   // truy cap ham static phai de toan tu pham vi ::
	 a.~HD();
	 HD::in_hoa_don();
 }