/*
	Cau 1: Viet chuong trinh C++ cho phep nhap 1 so nguyen duong n v� thuc hien:
- Hien thi c�c so chan trong khoang tu 1 den n
- Tinh tong c�c so chia het cho 3 hoac chia het cho 7 trong khoang tu 1 den n
*/

#include <iostream>
using namespace std;



int main(){
	//Khai bao va nhap n
	int n;
	cout << "Nhap n: ";
	cin >> n;
	//Hien thi c�c so chan trong khoang tu 1 den n
	for(int i = 1; i < n; i++){
		//Kiem tra i co phai so chan khong
		if(i % 2 == 0){
			cout << i << "\t";
		}
	}
	//Tinh tong c�c so chia het cho 3 hoac chia het cho 7 trong khoang tu 1 den n
	//Khai bao tong
	int tong = 0;s
	for(int i = 0; i < n; i++){
		//Kiem tra i co chia het cho 3 hoac 7 khong
		if(i % 3 == 0 || i % 7 == 0){
			tong += i;
		}
	}
	return 0;
}
