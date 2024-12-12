/*
	5. Nhap 1 so nguyen m.
	Hien thi so ngay trong thang m. Neu m == 2 thi cho nhap y va hien thi so ngay cua thang m nam y
*/

#include <iostream>
using namespace std;

//Nhap so
int nhap(){
	int n;
	cin >> n;
	return n;
}
//Kiem tra nam
void kiemTraNam(int nam){
	if(nam % 4 == 0){
		cout << "Thang co 29 ngay" << endl;
	} else {
		cout << "Thang co 28 ngay" << endl;
	}
}
//Kiem tra thang
void kiemTraThang(int thang){
	switch (thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: {
			cout << "Thang co 31 ngay" << endl;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:{
			cout << "Thang co 30 ngay" << endl;
			break;
		}
		case 2: {
			int nam = nhap();
			kiemTraNam(nam);
			break;
		}
			
		default: {
			cout << "Khong ton tai thang" << endl;
			break;
		}
			
	}
}
//main
int main(){
	cout << "Nhap thang: ";
	int thang = nhap();
	kiemTraThang(thang);
	return 0;
}
