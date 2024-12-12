/*
	12. Nhap so nguyen n. Hien thi n gia tri cua day fibonacci. Su dung de quy
*/

#include <iostream>
using namespace std;

int input(){
	int n;
	cin >> n;
	return n;
}

int fibonacci(int n){
	if(n == 0){
		return 0;
	} else if(n == 1){
		return 1;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main(){
	cout << "n = ";
	int n = input();
	for(int i = 0; i < n; i++){
		cout << fibonacci(i) << "\t";
	}
}
