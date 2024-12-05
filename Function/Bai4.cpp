/*
	4. Nhap 3 so nguyen a, b, c
	Tinh nghiem cua phuong trinh: a * x^2 + b * x + c = 0
*/

#include <iostream>
#include <cmath>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}
void tinhnghiem(int a, int b, int c){
	if(a == 0){
		if(b == 0){
			if(c == 0){
				cout << "Phuong trinh co vo so ngiem" << endl;
			} else {
				cout << "Phuong trinh vo nghiem" << endl;
			}
		} else {
			float x;
			x = (float) (-c) / b;
			cout << "Phuong trinh co nghiem x = " << x << endl;
		}
	} else {
		float x1, x2;
		int delta;
		delta = pow(b,2) - 4 * a * c;
		if(delta < 0){
			cout << "Phuong trinh vo nghiem" << endl;
		} else if (delta == 0){
			x1 = (float) (-b) / (2 * a);
			cout << "Phuong trinh co nghiem x1 = x2 = " << x1 << endl;
		} else {
			x1 = (float) ((-b) + sqrt(delta)) / (2 * a);
			x2 = (float) ((-b) - sqrt(delta)) / (2 * a);
			cout << "Phuong trinh co nghiem x1 = " << x1 << ", x2 = " << x2 << endl;
		}
	}
}
int main(){
	cout << "a = ";
	int a = nhap();
	cout << "b = ";
	int b = nhap();
	cout << "c = ";
	int c = nhap();
	tinhnghiem(a, b, c);
	return 0;
}
