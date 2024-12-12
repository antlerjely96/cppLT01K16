/*	
	6. Tao menu
		1. Nhap 2 so nguyen. Tinh tong, hieu, tich, thuong
		2. Nhap 3 so thuc. Kiem tra 3 so thuc co tao thanh tam giac khong
		3. Nhap 3 so nguyen a, b, c. Tinh nghiem phuong trinh a * x ^ 2 + b * x + c = 0
		4. Nhap thang, nam. Hien thi so ngay cua thang va nam da nhap
		5. Nhap n la doanh thu 1 thang cua nhan vien. Tinh hoa hong, biet neu doanh thu < 100.000.000 thi hoa hong = 10% doanh thu, neu doanh thu >= 100.000.000 va < 300.000.000 thi hoa hong = 15%, neu doanh thu > 300.000.000 thi hoa hong = 20%
		6. Thoat
	Nhap so nguyen n de thuc hien menu tren
*/

#include <iostream>
#include <cmath>
using namespace std;

//Nhap so nguyen
int nhapSoNguyen(){
	int n;
	cin >> n;
	return n;
}
//Nhap so thuc
float nhapSoThuc(){
	float n;
	cin >> n;
	return n;
}

//Tinh tong
void tinhTong(int a, int b){
	int tong = a + b;
	cout << "a + b = " << tong << endl;
}
//Tinh Hieu
void tinhHieu(int a, int b){
	int hieu = a - b;
	cout << "a - b = " << hieu << endl;
}
//Tinh tich
void tinhTich(int a, int b){
	int tich = a * b;
	cout << "a * b = " << tich << endl;
}
//Tinh thuong
void tinhThuong(int a, int b){
	if(b != 0){
		float thuong = (float)a / b;
		cout << "a / b = " << thuong << endl;
	} else {
		cout << "khong chia duoc!" << endl;
	}
}

//Kiem tra tam giac
void kiemTra(float x, float y, float z){
	if(x > 0 && y > 0 && z > 0){
		if(x + y > z && x + z > y && y + z > x){
			cout << "3 so da nhap la 3 canh cua 1 tam giac" << endl;
		} else {
			cout << "3 so da nhap khong la 3 canh cua 1 tam giac" << endl;
		}
	}
}

//Tinh nghiem phuong trinh bac 2
void giaiPhuongTrinhBac2(int a, int b, int c){
	if(a == 0){
		if(b == 0){
			if(c == 0){
				cout << "Phuong trinh vo so nghiem" <<endl;
			} else {
				cout << "Phuong trinh vo nghiem" << endl;
			}
		} else {
			float x = (float)(-c) / b;
			cout << "x = " << x << endl;
		}
	} else {
		int delta = pow(b, 2) - 4 * a * c;
		if (delta < 0){
			cout << "Phuong trinh vo nghiem." << endl;
		} else if (delta == 0){
			float x = (float)(-b) / (2 * a);
			cout << "Phuong trinh co nghiem kep x = " << x << endl;
		} else {
			float x1 = ((float)(-b) + sqrt(delta)) / (2 * a);
			float x2 = ((float)(-b) - sqrt(delta)) / (2 * a);
			cout << "Phuong trinh co 2 nghiem phan biet." << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
	}
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
		case 11: {
			cout << "Thang co 30 ngay" << endl;
			break;
		}
		case 2: {
			int nam = nhapSoNguyen();
			kiemTraNam(nam);
			break;
		}
			
		default: {
			cout << "Khong ton tai thang" << endl;
			break;
		}
			
	}
}

//Tinh hoa hong
void tinhHoaHong(float doanhThu){
	float hoaHong;
	cout << "Nhap doanh thu: ";
	if (doanhThu < 100000000){
		hoaHong = doanhThu * 0.1;
	} else if(doanhThu >= 100000000 && doanhThu < 300000000){
		hoaHong = doanhThu * 0.15;
	} else{
		hoaHong = doanhThu * 0.2;
	}
	cout << "Hoa Hong: " << hoaHong << endl;
}

//menu
void menu(){
	int n;
	do {
		cout << "1. Nhap 2 so nguyen. Tinh tong, hieu, tich, thuong" << endl;
		cout << "2. Nhap 3 so thuc. Kiem tra 3 so thuc co tao thanh tam giac khong" << endl;
		cout << "3. Nhap 3 so nguyen a, b, c. Tinh nghiem phuong trinh a * x ^ 2 + b * x + c = 0" << endl;
		cout << "4. Nhap thang, nam. Hien thi so ngay cua thang va nam da nhap" << endl;
		cout << "5. Nhap n la doanh thu 1 thang cua nhan vien. Tinh hoa hong, biet neu doanh thu < 100.000.000 thi hoa hong = 10% doanh thu, neu doanh thu >= 100.000.000 va < 300.000.000 thi hoa hong = 15%, neu doanh thu > 300.000.000 thi hoa hong = 20%" << endl;
		cout << "6. Thoat" << endl;
		cout << "Nhap so de chon: ";
		n = nhapSoNguyen();
		switch(n){
			case 1: {
				cout << "a = ";
				int a = nhapSoNguyen();
				cout << "b = ";
				int b = nhapSoNguyen();
				tinhTong(a, b);
				tinhHieu(a, b);
				tinhTich(a, b);
				tinhThuong(a, b);
				break;
			}
			case 2: {
				cout << "a = ";
				float a = nhapSoThuc();
				cout << "b = ";
				float b = nhapSoThuc();
				cout << "c = ";
				float c = nhapSoThuc();
				kiemTra(a, b, c);
				break;
			}
			case 3: {
				cout << "a = ";
				int a = nhapSoNguyen();
				cout << "b = ";
				int b = nhapSoNguyen();
				cout << "c = ";
				int c = nhapSoNguyen();
				giaiPhuongTrinhBac2(a, b, c);
				break;
			}
			case 4: {
				int thang = nhapSoNguyen();
				kiemTraThang(thang);
				break;
			}
			case 5: {
				float doanhThu = nhapSoThuc();
				tinhHoaHong(doanhThu);
				break;
			}
			case 6: {
				break;
			}
			default: {
				cout << "Khong ton tai lua chon" << endl;
				break;
			}	
		}
	} while (n != 6);
}

//main
int main(){
	menu();
	return 0;
}
