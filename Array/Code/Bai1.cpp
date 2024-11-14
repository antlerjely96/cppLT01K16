/*
	1. Nhap mang co 10 so nguyen. Tinh tong cac phan tu cua mang
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao mang
	int arr[10];
	//Nhap mang (nhap lan luot cac phan tu cua mang)
	//Chay vong lap theo chi so index (chay tu 0 -> 9)
	for(int i = 0; i < 10; i++){
		cout << "Nhap arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Tinh tong cac phan tu cua mang
	//Lan luot duyet qua cac phan tu cua mang, cong gia tri cua cac phan tu vao 1 bien
	//Chay vong lap theo chi so index (chay tu 0 -> 9)
	//Khai bao sum = 0
	int sum = 0;
	for(int i = 0; i < 10; i++){
		//Cong phan tu vao sum
		sum += arr[i];
	}
	//Hien thi ket qua
	cout << "Tong cac phan tu trong mang la: " << sum << endl;
	return 0;
}
