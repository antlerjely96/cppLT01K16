/*
	2. Tinh tong cac so nguyen tu 1 den 100
*/
#include <iostream>
using namespace std;

int main() {
	//Khai bao tong
	int sum = 0;
	//Tinh tong
	for (int i = 1; i<= 100; i++) {
		sum += i;
	}
	//Hien thi ket qua
	cout << "Tong cac so nguyen tu 1 den 100 la: " << sum << endl;
	return 0;
}
