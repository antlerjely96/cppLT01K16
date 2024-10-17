/*
	5. Nhap 1 so nguyen m.
	Hien thi so ngay trong thang m. Neu m == 2 thi cho nhap y va hien thi so ngay cua thang m nam y
*/

#include <iostream>
using namespace std;

int main() {
	//Khai bao m
	int m;
	//Nhap m
	cout << "Thang: ";
	cin >> m;
	//Kiem tra m
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		cout << "Thang co 31 ngay" << endl;
	} else if (m == 4 || m == 6 || m == 9 || m == 11){
		cout << "Thang co 30 ngay" << endl;
	} else if (m == 2) {
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
	} else {
		cout << "Thang khong ton tai" << endl;
	}
	return 0;
}
