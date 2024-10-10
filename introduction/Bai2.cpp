/*
	2. Nhap 3 so thuc a, b. Tinh
	a, a + b + c
	b, a - b + c
	c, a * b / c
	d, a^2 + b^2 + c^2
	e, a^2 + 2 * a * b + b^2
	f, a^3 + 3 * a^2 + b + 3 * a * b^2 + b^3
	g, a * b * c
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao a, b, c
	float a;
	float b;
	float c;
	//Nhap a, b, c
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	//Tinh
	float cauA = a * b * c;
	float cauB = a - b + c;
	float cauC = a * b / c;
	float cauD = a * a + b * b + c * c;
	float cauE = a * a + 2 * a * b + b * b;
	float cauF = a * a * a + 3 * a * a + b + 3 * a * b * b + b * b * b;
	float cauG = a * b * c;
	//Hien thi ket qua
	cout << "a, " << cauA << endl;
	cout << "b, " << cauB << endl;
	cout << "c, " << cauC << endl;
	cout << "d, " << cauD << endl;
	cout << "e, " << cauE << endl;
	cout << "f, " << cauF << endl;
	cout << "g, " << cauG << endl;
	return 0;
}
