/*
	3. Nhap 1 so nguyen n. Neu n < 0 thi tinh tong cac so tu n den 0
		Neu n >= 0 thi tinh tong cac so tu 0 den n
*/
#include <iostream>
using namespace std;

int main() {
	//khai bao
	int n, i, tong = 0;
	//Nhap n
	cout << "nhap n: ";
	cin >> n;
	if(n < 0){
		//tinh tong tu n den 0
	 	for (i = n; i <= 0; i++){
	 		tong = tong + i;
		}
	} else {
 		//tinh tong tu 0 den n
	 	for (i = 0; i <= n; i++){
	 		tong = tong + i;
		}
	}
	//hien thi ket qua
	cout << "tong cac so nguyen là: " << tong << endl;
	return 0;
}
