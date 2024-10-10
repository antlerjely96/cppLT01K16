/*
	2. Nhap so nguyen a. Kiem tra a la so chan hay le
*/

#include <iostream>
using namespace std;

int main(){
	//khai bao a
	int a;
	//nhap a
	cout <<"Nhap a: ";
	cin >> a;
	//kiem tra a % 2 == 0 hay khong
	if(a % 2 == 0) {
		//hien thi a la so chan neu a % 2 == 0 True
		cout << "a la so chan" << endl;
	} else {
		//Hien thi a la so le neu a % 2 == 0 False
		cout << "a la so le" << endl;
	}
	return 0;
}

