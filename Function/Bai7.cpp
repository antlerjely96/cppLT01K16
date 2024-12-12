/*
	7. Tinh tong cac so nguyen tu 1 den 100
*/

#include <iostream>
using namespace std;
void tinh(){
	int tong = 0;
	for(int i = 1; i <= 100; i++){
		tong += i;
	}
	cout << "tong cac so nguyen tu 1 den 100 la: " << tong << endl;
}
int main(){
	tinh();
	return 0;
}
