/*
	7. Nhap mang co n so nguyen. Tinh tong cac phan tu co index chia het cho 3
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao n va nhap n
	int n;
	cout << "Nhap n: ";
	cin >> n;
	// Khai bao mang so nguyen
	int arr[n];
	cout << "Nhap cac phan tu cua mang: " << endl;
	//nhap cac phan tu
	for(int i = 0; i < n; i++) {
		cout << "arr["<<i<<"] = ";
		cin >> arr[i];
	}
	//Khai bao sum
	int sum = 0;
	//tinh tong cac phan tu chia het cho 3
	for(int i = 0; i < n; i++) {
		if(i % 3 == 0){ //kiem tra phan tu chia het cho 3
			sum += arr[i];
		}
	}
	//hien thi ket qua
	cout << "Tong cac index chia het cho 3: " << sum << endl;
	return 0;
}

