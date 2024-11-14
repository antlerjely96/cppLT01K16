/*
	2. Nhap mang co 10 so nguyen.
	Hien thi cac phan tu co gia tri chan trong mang
*/

#include <iostream>
using namespace std;
int main(){
	//khai bao mang
	int arr[10];
	//chay vong lap de nhap cac phan tus
	for (int i = 0; i < 10; i++){
		//Nhap phan tu thu i
		cout << "Nhap arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Chay vong lap de kiem tra cac phan tu co gia tri chan hay khong
	for (int i = 0; i < 10; i++){
		//Kiem tra phan tu thu i co chia het cho 2 hay khong
		if (arr[i] % 2 ==0){
			//Hien thi phan tu thu i
			cout << arr[i];
		}
	}
	return 0;
}
