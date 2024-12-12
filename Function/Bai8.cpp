/*
	8. Nhap 1 so nguyen n. Neu n < 0 thi tinh tong cac so tu n den 0
		Neu n >= 0 thi tinh tong cac so tu 0 den n
*/

#include <iostream>
using namespace std;

//nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}

//tinh 
void tinh(int n){
	int sum = 0;
	if(n < 0){
		for(int i = n; i <= 0; i++){
			sum += i;
		}
	} else {
		for(int i = 0; i <= n; i++){
			sum += i;
		}
	}
	cout << "tong cac so nguyen la: " << sum << endl;
}
//main
int main(){
	cout << "n = ";
	int n = nhap();
	tinh(n);
}
