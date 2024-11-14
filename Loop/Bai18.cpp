/*
	18. Nhap so nguyen n. Hien thi cac so nguyen to trong khoang tu 1 den n
*/

#include <iostream>
using namespace std;

int main(){
	//Khai b�o n,i,j
	int n, i, j, count;
	//Nhap n va gan gia tri
	cout << "Nhap n: ";
	cin >> n;
	if (n <= 1){
		cout << " Kh�ng c� so nguy�n to trong khoang tu 0 den n" << endl;
	} else {
		for (i = 2; i < n ; i++){
			count = 0;
			for (j = 2; j < i; j++) {
				if (i % j == 0){
					count++;
				}
			}
			if(count == 0){
				cout << i << "\t";
			}
		}
	}
	return 0;
}
