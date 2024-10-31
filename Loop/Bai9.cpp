/*
	9. Nhap 1 so nguyen n.
	Hien thi day fibonacci voi n so.
	Vi du: nhap n = 6
	Hien thi: 1 1 2 3 5 8
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao
	int n, sum, before = 1, next = 0, i = 0;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Hien thi day fibonacci
	for(i = 0; i < n; i++){
		cout << before << "\t";
		sum = before + next;
		next = before;
		before = sum;
	}
	return 0;
}
