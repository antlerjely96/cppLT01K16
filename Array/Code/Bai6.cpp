/*
	6. Nhap mang so nguyen co n phan tu, n duoc nhap tu ban phim
	Tim phan tu co gia tri lon nhat, nho nhat trong mang
*/

#include <iostream>
using namespace std;

int main(){
	//khai bao
	int n;
	//nhap n
	cout <<"n = ";
	cin >> n;
	//khai bao mang
	int arr[n];
	//nhap mang(nhap lan luot ca phan tu cua mang)
	//chay vong lap theo chi so index
	for(int i = 0; i < n; i++){
		cout <<"arr["<< i <<"] = ";
		cin >> arr[i];
	}
	//Gan max bang phan tu dau tien cua mang
	int max = arr[0];
	//Vong lap duyet qua tung phan tu
	for(int i = 0; i < n; i++){
		//Kiem tra arr[i] > max khong
		if (arr[i] > max){
			max = arr[i];
		}
	}
	//Hien thi
	cout << "max = " << max << endl;
	//Gan min bang phan tu dau tien cua mang
	int min = arr[0];
	//Vong lap duyet qua tung phan tu
	for(int i = 0; i < n; i++){
		//Kiem tra arr[i] < min khong
		if (arr[i] < min){
			min = arr[i];
		}
	}
	//Hien thi
	cout << "min = " << min << endl;
	return 0;
}
