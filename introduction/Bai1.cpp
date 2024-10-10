/*
	1. Nhap 2 so nguyen a, b tu ban phim
	Tinh tong, hieu, tich, thuong cua 2 so
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao 2 bien a, b
	int a;
	int b;
	//Nhap a, b
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	//Tinh tong
	int tong = a + b;
	//Tinh hieu
	int hieu = a - b;
	//Tinh tich
	int tich = a * b;
	//Tinh thuong
	float thuong = (float) a / b;
	//Hien thi ket qua
	cout << "a + b = " << tong << endl;
	cout << "a - b = " << hieu << endl;
	cout << "a * b = " << tich << endl;
	cout << "a / b == " << thuong << endl;
}
