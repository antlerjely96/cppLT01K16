/*
	3. Nhap so nguyen n.
	Nhap mang so nguyen co n phan tu
	Tinh tong cac phan tu co gia tri le trong mang
*/
#include <iostream>
using namespace std;

int main () {
	//Khai bao n, i, sum = 0
	int n, i, sum = 0;
	//Nhap n
	cout << "Nhap n = ";
	cin >> n;
	//Khai bao mang
	int arr[n];
	//Chay vong lap tu 0 -> n-1
	for (i = 0; i < n; i++){
		//Nhap mang
		cout << "Nhap arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Chay vong lap kiem tra xem cac phan tu co phai so le hay khong
	for (i = 0; i < n; i++){
		//Kiem tra cac phan tu co phai so le hay khong
		if (arr[i] % 2 != 0) {
			//Tinh tong cac so le
			sum += arr[i];
		}
	}
	cout << "Tong cac phan tu co gia tri le trong mang la: " << sum << endl;
	return 0;
}
