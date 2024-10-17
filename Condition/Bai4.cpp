/*
	4. Nhap 3 so nguyen a, b, c
	Tinh nghiem cua phuong trinh: a * x^2 + b * x + c = 0
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//Khai bao a, b, c
	int a;
	int b;
	int c;
	//Nhap a, b, c
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	//Kiem tra a == 0
	if(a == 0){
		//Kiem tra b == 0
		if(b == 0){
			//Kiem tra c == 0
			if(c == 0){
				cout << "Phuong trinh co vo so nghiem" << endl;
			} else {
				cout << "Phuong trinh vo nghiem" << endl;
			}
		} else {
			//Khai bao x
			float x;
			//Tinh x
			x = (float) (-c) / b;
			//Hien thi ket qua
			cout << "Phuong trinh co nghiem x = " << x << endl;
		}
	} else {
		//Khai bao x1, x2
		float x1, x2;
		int delta;
		//Tinh delta
		delta = pow(b, 2) - 4 * a * c;
		//Kiem tra delta < 0
		if(delta < 0){
			cout << "Phuong trinh vo nghiem" << endl;
		} else if(delta == 0){
			//Tinh x1
			x1 = (float)(-b) / (2 * a);
			//Hien thi ket qua
			cout << "Phuong trinh co nghiem x1 = x2 = " << x1 << endl;
		} else {
			//Tinh x1, x2
			x1 = (float)((-b) + sqrt(delta)) / (2 * a);
			x2 = (float)((-b) - sqrt(delta)) / (2 * a);
			//Hien thi ket qua
			cout << "Phuong trinh co nghiem x1 = " << x1 << ", x2 = " << x2 << endl;
		}
	}
}
