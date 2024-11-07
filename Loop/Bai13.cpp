/*
	13. In hinh sau
	*
	*	*
	*	*	*
	*	*	*	*
	*	*	*	*	*
	*	*	*	*	*
	*	*	*	*
	*	*	*
	*	*
	*
*/

#include<iostream>
using namespace std;

int main(){
	int i, j;
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= i; j++)
		{
			cout << "*" << "\t";
		}
		cout << endl;
	}
	for (i = 1; i <= 5; i++){
		for(j = 1; j <= 5 - i + 1; j++){
			cout <<"*"<<"\t";
		}
		cout<< endl;
	}
	return 0;
}

