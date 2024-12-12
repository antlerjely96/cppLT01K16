/*
	11. Nhap so nguyen n. Tinh n! Su dung de quy
*/

#include <iostream>
using namespace std;

//Nhap
int input(){
	int n;
	cin >> n;
	return n;
}

//Ham de quy tinh giai thua
int factorial(int n){
	if(n == 1){
		return 1;
	}
	return n * factorial(n - 1);
}

//main
int main(){
	cout << "n = ";
	int n = input();
	cout << n << "!= " << factorial(n) << endl;
	return 0;
}
