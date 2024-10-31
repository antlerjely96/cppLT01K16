/*
	6. Nhap so nguyen n. Kiem tra n co phai so nguyen to khong
*/

#include <iostream>
using namespace std;

int main () {
	//khai bao n, i
	int n, i, count = 0;
	//nhap n
	cout << "nhap so nguyen n: ";
	cin >> n;
	//n < 2 hien thi n khong phai la so nguyen to
	if (n < 2){
		cout << "n khong phai la so nguyen to" << endl;
	} else {
		//kiem tra
		for (i = 2; i < n; i++){
			if (n % i == 0){
				count++;
			}
		}
		//Kiem tra count
		if(count == 0){
			//hien thi n la so nguyen to
			cout << "n la so nguyen to" << endl;
		} else {
			//hien thi n khong la so nguyen to
			cout << "n khong phai la so nguyen to" << endl;
		}
	}
	return 0;
}
