/*
	10. Nhap mang so nguyen co n phan tu.
	Nhap 1 so nguyen m tu ban phim.
	Hien thi so lan xuat hien cua m trong mang
*/

#include <iostream>
using namespace std;
int main(){
	//Khai bao n,m,arr[n]
	int n, m;
	cout << "Nhap n: ";
	cin >> n;
	int arr[n];
	//Nhap arr[i]
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}
	//Nhap m
	cout << "Nhap m: ";
	cin >> m;
	int count = 0;
	//Chay vong lap de xac dinh so lan xuat hien m
	for(int i = 0; i < n; i++){
		if(arr[i] == m){
			count++;
		}
	}
	//Hien thi so lan xuat hien cua m trong mang
	cout << count;
}
