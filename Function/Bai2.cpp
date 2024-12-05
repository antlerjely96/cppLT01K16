/*
	2. Nhap 3 so thuc a, b, c. Tinh
	a, a + b + c
	b, a - b + c
	c, a * b / c
	d, a^2 + b^2 + c^2
	e, a^2 + 2 * a * b + b^2
	f, a^3 + 3 * a^2 + b + 3 * a * b^2 + b^3
	g, a * b * c
	Su dung function de thuc hien
*/
#include <iostream>
#include <cmath>
using namespace std;
//Nhap
int nhap(){
	float n;
	cin >> n;
	return n;
}
//Tinh a + b + c
void tinha(float a, float b, float c){
	float ca = a + b + c;
	cout << "a + b + c = " << ca << endl;
}
//Tinh a - b + c
void tinhb(float a, float b, float c){
	float cb = a - b + c;
	cout << "a - b + c = " << cb << endl;
}
//Tinh a * b / c
void tinhc(float a, float b, float c){
	if(c != 0){
		float cc = a * b / c;
		cout << "a * b / c = " << cc << endl;
	} else {
		cout << "Khong chia duoc!" << endl;
	}
}
//Tinh a ^ 2 + b ^ 2 + c ^ 2
void tinhtbbp(float a, float b, float c){
	float tbbp = pow(a, 2) + pow(b, 2) + pow(c, 2);
	cout << "a^2 + b^2 + c^2 = " << tbbp << endl;
}
//Tinh a ^ 2 + 2 * a * b + b ^ 2
void tinhhdts1(float a, float b){
	float hdts1 = pow(a, 2) + 2 * a * b + pow(b, 2);
	cout << "a ^ 2 + 2 * a * b + b ^ 2 = " << hdts1 << endl;
}
//Tinh a ^ 3 + 3 * a ^ 2 + b + 3 * a * b ^ 2 + b ^ 3
void tinhf(float a, float b){
	float f = pow(a, 3) + 3 * pow(a, 2) + b + 3 * a * pow(b, 2) + pow(b, 3);
	cout << "a ^ 3 + 3 * a ^ 2 + b + 3 * a * b ^ 2 + b ^ 3 = " << f << endl;
}
//Tinh a * b * c
void tinhg(float a, float b, float c){
	int g = a * b * c;
	cout << "a * b * c = " << g << endl;
}

int main(){
	cout << "a = ";
	float a = nhap();
	cout << "b = ";
	float b = nhap();
	cout << "c = ";
	float c = nhap ();
	//Goi ham tinha
	tinha(a, b, c);
	//Goi ham tinhb
	tinhb(a, b, c);
	//Goi ham tinhc
	tinhc(a, b, c);
	//Goi ham tinhtbbp
	tinhtbbp(a, b, c);
	//Goi ham tinhhdts1
	tinhhdts1(a, b);
	//Goi ham tinhf
	tinhf(a, b);
	//Goi ham tinhg
	tinhg(a, b, c);
	return 0;
}
