/*
	9. Nhap so nguyen n. Tinh n!
*/

#include <iostream>
using namespace std;
int nhap(){
	int n;
	cin >> n;
	return n;
}
//tinh giai thua
void tinhGiaiThua(int n){
	int giaiThua = 1;
	if(n < 0){
		cout << "Giai thua khong xac dinh!";
	} else{
		for(int i = 1; i <= n; i++){
			giaiThua = giaiThua * i;
		}
		//hien thi ket qua
		cout << n << "!= " << giaiThua << endl;
	}
}
int main(){
	//goi ham nhap
	cout << "Nhap n: ";
	int n = nhap();
	//goi ham tinh giai thua
	tinhGiaiThua(n);
	return 0;
}

