/*
	4. Nhap so nguyen n. Tinh tong cac so chan trong khoang tu 1 den n (voi n > 0)
*/

#include <iostream>
using namespace std;

int main (){
	// khai bao bien
	int sum = 0, n, i;
	// nhap n
	cout << "Nhap n = ";
	cin >> n;
	// kiem tra 
	for (i = 1; i <= n; i++){
		if (i % 2 == 0){
			sum += i;
		}
	} 
	cout << "Tong cac so chan tu 1 den n la: " << sum << endl;
	return 0;
}

