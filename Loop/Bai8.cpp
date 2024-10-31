/*
	8. In cac so tu 1 den 100 (Vong lap chay tu 1 den 100) nhung khong in so 20
*/

#include <iostream>
using namespace std;

int main(){
	int i = 1;
	//Vong lap
	for(i = 1; i <= 100; i++){
		//Kiem tra i == 20
		if(i == 20){
			continue;
		} else {
			cout << i << endl;
		}
	}
	return 0;
}
