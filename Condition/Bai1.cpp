#include <iostream>
using namespace std;

int main(){
	/*
		1.Nhap 1 so nguyen a.
	Kiem tra neu a > 0 thi hien thi a la so duong,
	Neu a < 0 thi hien thi a la so am,
	Con lai thi hien thi a la so khong am khong duong
	*/
	
	//Khai bao a
	int a;
	//Nhap a
	cout << "Nhap a: ";
	cin >> a;
	//Kiem tra a > 0 hay khong
	if(a > 0){
		//Thuc hien khi a > 0 dung
		cout << "a la so duong" << endl;
	} else if (a < 0){
		//Thuc hien khi a > 0 sai, a < 0 dung
		cout << "a la so am" << endl;
	} else {
		//Thuc hien khi a > 0 sai, a < 0 sai
		cout << "a la so khong am khong duong" << endl;
	}
	return 0;
}
