/*
	4. Nhap mang so nguyen co n phan tu, n duoc nhap tu ban phim
	Hien thi cac phan tu co gia tri la so nguyen to
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao n, count = 0
	int n, count = 0;
	//Nhap n 
	cout <<"Nhap n = ";
	cin >> n;
	//Khai bao mang
	int arr[n];
	//vong lap de nhap mang
	for(int i = 0; i < n; i++){
		cout <<"Nhap mang [" << i << "] = ";
		cin >> arr[i];
	}
	//chay vong lap xem n co phai la so nguyen hay khong
	for(int i = 0; i < n; i++){
		//Kiem tra arr[i] >= 2
		if(arr[i] >= 2){
			count = 0;
			//Vong lap tu 2 den arr[i] - 1
			for(int j = 2; j < arr[i]; j++){
				//Kiem tra arr[i] co chia het cho j khong
				if(arr[i] % j == 0){
					count++;
				}
			}
			//Kiem tra count == 0
			if(count == 0){
				cout << arr[i] << endl;
			}
		}
	}
	return 0;
}
