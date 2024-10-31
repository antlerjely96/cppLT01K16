/*
	5. Nhap so nguyen n. Tinh n!
*/
#include <iostream>
using namespace std;

int main () {
	//Khai bao n , i
	int n, i;
	long long int factorial = 1;
	//Nhap n
	cout <<"Nhap 1 so nguyen khong am :";
	cin >> n;
	//Tinh giai thua
	if (n < 0) {
 		cout << "Giai thua khong xac dinh";
 	} else {
 		for (i = 1; i <= n; i++){
 			factorial *= i;
		}
	 	cout << "Giai thua cua " << n << " la: "<< factorial;
 	}
 	return 0;
}
