/*
	10. In hinh sau
	*
	*	*
	*	*	*
	*	*	*	*
	*	*	*	*	*
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao i
	int i, j;
	//Chay vong lap in theo chieu doc
	for(i = 1; i <= 5; i++){
		//Chay vong lap in theo chieu ngang
		for(j = 1; j <= i; j++){
			cout << "*" << "\t";
		}
		//Xuong dong
		cout << endl;
	}
	return 0;
}
