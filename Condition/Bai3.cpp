/*
	3. Nhap 3 so thuc a, b, c
	Kiem tra a, b, c co tao thanh tam giac hay khong
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao a, b, c
	float a;
	float b;
	float c;
	//Nhap a, b, c
	cout <<"Nhap a: ";
	cin >> a;
	cout <<"Nhap b: ";
	cin >> b;
	cout <<"Nhap c: ";
	cin >> c;
	//Kiem tra a, b, c > 0
	if(a > 0 && b > 0 && c > 0) {
		//Kiem tra a + b > c, a + c > b, b + c > a
		if(a + b > c && a + c > b && b + c > a){
			cout << "a, b, c la 3 canh cua tam giac" << endl;
		} else {
			cout << "a, b, c khong la 3 canh cua tam giac" << endl;
		}
	} else {
		cout << "a, b, c khong la 3 canh cua tam giac" << endl;
	}
	return 0;
}
