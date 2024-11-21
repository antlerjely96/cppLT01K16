/*
	5. Nhap mang so thuc co n phan tu, n duoc nhap tu ban phim
	Tinh tong cac phan tu co phan nguyen la so chan
*/

#include <iostream>
using namespace std;

int main(){
	//khai bao va nhap n
	int n;
	float sum = 0;
	cout << "nhap so mang : ";
	cin >> n;
	//khai bao mang
	float arr[n];
	for (int i = 0; i <n; i++){
		cout << "Nhap arr [" << i << "] = ";
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++){
		if((int)arr[i] % 2 == 0){
			sum += arr[i];
		}
	}
	cout << "Tong cac phan tu co phan nguyen chan la: " << sum << endl;
	return 0;	
}

