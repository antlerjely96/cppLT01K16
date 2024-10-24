#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//Tao menu
	cout << "1. Nhap 2 so nguyen. Tinh tong, hieu, tich, thuong" << endl;
	cout << "2. Nhap 3 so thuc. Kiem tra 3 so thuc co tao thanh tam giac khong" << endl;
	cout << "3. Nhap 3 so nguyen a, b, c. Tinh nghiem phuong trinh a * x ^ 2 + b * x + c = 0" << endl;
	cout << "4. Nhap thang, nam. Hien thi so ngay cua thang va nam da nhap" << endl;
	cout << "5. Nhap n la doanh thu 1 thang cua nhan vien. Tinh hoa hong, biet neu doanh thu < 100.000.000 thi hoa hong = 10% doanh thu, neu doanh thu >= 100.000.000 va < 300.000.000 thi hoa hong = 15%, neu doanh thu > 300.000.000 thi hoa hong = 20%" << endl;
	cout << "Nhap so de chon: ";
	//Khai bao bien chon
	int chon;
	cin >> chon;
	//Kiem tra chon
	switch(chon){
		case 1:
		{
			//Khai bao 2 so nguyen
			int a, b;
			//Nhap a, b
			cout << "Nhap a: ";
			cin >> a;
			cout << "Nhap b: ";
			cin >> b;
			//Tinh tong
			int tong = a + b;
			//Tinh hieu
			int hieu = a - b;
			//tinh tich
			int tich = a * b;
			//Tinh thuong
			float thuong = (float) a / b;
			//Hien thi ket qua
			cout << "a + b = " << tong << endl;
			cout << "a - b = " << hieu << endl;
			cout << "a * b = " << tich << endl;
			cout << "a / b = " << thuong << endl;
			break;
		}
		case 2:
		{
			//Khai bao 3 so thuc
			float c, d, e;
			//Nhap c, d, e
			cout << "Nhap c: ";
			cin >> c;
			cout << "Nhap d: ";
			cin >> d;
			cout << "Nhap e: ";
			cin >> e;
			//Kiem tra 3 so co tao thanh tam giac khong
			if(c > 0 && d > 0 && e > 0){
				if(c + d > e && c + e > d && d + e > c){
					cout << "3 so da nhap la 3 canh cua 1 tam giac" << endl;
				}
				else {
					cout << "3 so da nhap khong la 3 canh cua 1 tam giac" << endl;
				}
			} else {
				cout << "3 so da nhap la 3 canh cua 1 tam giac" << endl;
			}
			break;
		}
		case 3:
		{
			//Khai bao g, h, i
			int g;
			int h;
			int i;
			//Nhap g, h, i
			cout << "g = ";
			cin >> g;
			cout << "h = ";
			cin >> h;
			cout << "i = ";
			cin >> i;
			//Kiem tra g == 0
			if(g == 0){
				//Kiem tra h == 0
				if(h == 0){
					//Kiem tra i == 0
					if(i == 0){
						cout << "Phuong trinh co vo so nghiem" << endl;
					} else {
						cout << "Phuong trinh vo nghiem" << endl;
					}
				} else {
					//Khai bao x
					float x;
					//Tinh x
					x = (float) (-i) / h;
					//Hien thi ket qua
					cout << "Phuong trinh co nghiem x = " << x << endl;
				}
			} else {
				//Khai bao x1, x2
				float x1, x2;
				int delta;
				//Tinh delta
				delta = pow(h, 2) - 4 * g * i;
				//Kiem tra delta < 0
				if(delta < 0){
					cout << "Phuong trinh vo nghiem" << endl;
				} else if(delta == 0){
					//Tinh x1
					x1 = (float)(-h) / (2 * g);
					//Hien thi ket qua
					cout << "Phuong trinh co nghiem x1 = x2 = " << x1 << endl;
				} else {
					//Tinh x1, x2
					x1 = (float)((-h) + sqrt(delta)) / (2 * g);
					x2 = (float)((-h) - sqrt(delta)) / (2 * g);
					//Hien thi ket qua
					cout << "Phuong trinh co nghiem x1 = " << x1 << ", x2 = " << x2 << endl;
				}
			}
			break;
		}
		case 4:
		{
			//Khai bao thang, nam
			int thang, nam;
			//Nhap thang, nam
			cout << "Nhap thang: ";
			cin >> thang;
			cout << "Nhap nam: ";
			cin >> nam;
			//Kiem tra thang
			switch(thang){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					cout << "Thang " << thang << " nam " << nam << " co 31 ngay" << endl;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					cout << "Thang " << thang << " nam " << nam << " co 30 ngay" << endl;
					break;
				case 2:
					//Kiem tra nam
					if(nam % 4 == 0){
						cout << "Thang " << thang << " nam " << nam << " co 29 ngay" << endl;
					} else {
						cout << "Thang " << thang << " nam " << nam << " co 28 ngay" << endl;
					}
					break;
				default:
					cout << "Khong ton tai thang, nam da nhap" << endl;
					break;
			}
			break;
		}
		case 5:
		{
			//Khai bao doanh thu, hoa hong
			int doanhThu, hoaHong;
			//Nhap doanh thu
			cout << "Nhap doanh thu: ";
			cin >> doanhThu;
			//Kiem tra va tinh
			if(doanhThu < 100000000){
				hoaHong = doanhThu * 0.1;
			} else if (doanhThu >= 100000000 && doanhThu < 300000000){
				hoaHong = doanhThu * 0.15;
			} else {
				hoaHong = doanhThu * 0.2;
			}
			//Hien thi ket qua
			cout << "Hoa hong cua nhan vien la: " << hoaHong << endl;
			break;
		}
		default:
		{
			cout << "Khong co trong menu" << endl;
			break;
		}
	}
	return 0;
}
