/*
	17. Nhap so n. In hinh:
	*
	*	*
	*	*	*
	...
	n dau *
	
*/

#include <iostream>
using namespace std;

int main(){
	int i, j, n;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Chay vong lap
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			cout << "*\t";
		}
		cout << endl;
	}
	return 0;
}
