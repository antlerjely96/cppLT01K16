/*
	1. Viet 1 chuong trinh nhap 2 so nguyen a, b.
	Tinh tong, hieu, tich, thuong cua 2 so
*/

#include <iostream>
#include <cmath>
using namespace std;

//Bien toan cuc c
int c = 10;
//Nhap
int nhap(){
	//n la bien cuc bo cua ham nhap
	int n;
	cin >> n;
	//Tra ve n de su dung o cac ham khac
	return n;
}
//Tinh tong
void tinhTong(int a, int b){
	int tong = a + b;
	cout << "a + b = " << tong << endl;
}
//Tinh hieu
void tinhHieu(int a, int b){
	int hieu = a - b;
	cout << "a - b = " << hieu << endl;
}
//Tinh tich
void tinhTich(int m, int n){
	int tich = m * n;
	cout << "a * b = " << tich << endl;
}
//Tinh thuong
void tinhThuong(int m, int n){
	if(n != 0){
		float thuong = (float)m / n;
		cout << "a / b = " << thuong << endl;
	} else {
		cout << "Khong chia duoc!" << endl;
	}
}
//Ham main mac dinh de chay code
int main(){
	//Goi ham nhap
	cout << "a = ";
	int a = nhap();
	cout << "b = ";
	int b = nhap();
	//Goi ham tinhTong
	tinhTong(a, b);
	//Goi ham tinhHieu
	tinhHieu(a, b);
	//Goi ham tinhTich
	tinhTich(a, b);
	//Goi ham tinhThuong
	tinhThuong(a, b);
	return 0;
}
