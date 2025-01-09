/*
	Câu 1: Viet chuong trinh C++ cho phep nhap 1 so nguyen duong n và thuc hien:
	- Hien thi các so chia het cho 3 trong khoang tu 1 den n
	- Hien thi n có phai so nguyên to hay khong?
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n;
	cout << "n = ";
	cin >> n;
	//Hien thi cac so chia het cho 3
	for(int i = 0; i < n; i++){
		if(i % 3 == 0){
			cout << i << "\t";
		}
	}
	//Kiem tra n co phai so nguyen to khong
	int count = 0;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			count++;
		}
	}
	//Kiem tra count = 0?
	if(count == 0){
		cout << "n la so nguyen to" << endl;
	} else {
		cout << "n khong la so nguyen to" << endl;
	}
	return 0;
}
