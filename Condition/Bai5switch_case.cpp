/*
	5. Nhap 1 so nguyen n.
	Hien thi so ngay trong thang n. Neu n == 2 thi cho nhap nam va hien thi so ngay
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao m
	int m;
	//Nhap m
	cout << "Thang: ";
	cin >> m;
	//switch - case: khi gap 1 case thoa man thi se chay khoi lenh trong case do va cac case ben duoi
	// Nen trong khoi lenh trong case phai co lenh break de khong chay case tiep theo
	switch(m){
		case 1:
			cout << "Thang co 31 ngay" << endl;
			break;
		case 3:
			cout << "Thang co 31 ngay" << endl;
			break;
		case 5:
			cout << "Thang co 31 ngay" << endl;
			break;
		case 7:
			cout << "Thang co 31 ngay" << endl;
			break;
		case 8:
			cout << "Thang co 31 ngay" << endl;
			break;	
		case 10:
			cout << "Thang co 31 ngay" << endl;
			break;
		case 12:
			cout << "Thang co 31 ngay" << endl;
			break;
		case 4:
			cout << "Thang co 30 ngay" << endl;
			break;
		case 6:
			cout << "Thang co 30 ngay" << endl;
			break;
		case 9:
			cout << "Thang co 30 ngay" << endl;
			break;
		case 11:
			cout << "Thang co 30 ngay" << endl;
			break;
		case 2:
			//Khai bao y
			int y;
			//Nhap y
			cout << "Nhap y: ";
			cin >> y;
			//Kiem tra y
			if (y % 4 == 0){
				cout << "Thang co 29 ngay" << endl;
			} else {
				cout << "Thang co 28 ngay" << endl;
			}
			break;
		default:
			cout << "Thang khong ton tai" << endl;
			break;
	}
	return 0;
}
