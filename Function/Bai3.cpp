/*
	3. Nhap 3 so thuc a, b, c
	Kiem tra a, b, c co tao thanh tam giac hay khong
*/

#include <iostream>
using namespace std;
//Nhap
float nhap(){
	float n;
	cin >> n;
	//Tra ve n de su dung o cac ham khac
	return n;
}
void ktra(float a, float b, float c){
	if(a > 0 && b > 0 && c > 0){
		//Ktra a + b > c && b + c > a && a + c > b
		if(a + b > c && b + c > a && a + c > b){
			cout << "a, b, c la 3 canh cua tam giac" << endl;
		} else {
			cout << "a, b, c kh la 3 canh cua tam giac" << endl;
		}
	} else {
		cout << "a, b, c kh la 3 canh cua tam giac" << endl;
	}
}
//Ham main mac dinh de chay code
int main(){
	cout << "a = ";
	float a = nhap();
	cout << "b = ";
	float b = nhap();
	cout << "c = ";
	float c = nhap();
	//Goi ham ktra
	ktra(a, b,c);
	return 0;
}
