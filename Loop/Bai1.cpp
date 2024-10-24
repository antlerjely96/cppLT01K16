#include <iostream>
using namespace std;

int main(){
	//Hien thi cac so tu 0 den 100
	
	/* Dung vong lap for:
		tham so 1: i = 0
		tham so 2: i <= 100
		tham so 3: i++
	*/
	int i = 0;
	for(i = 0; i <= 100; i++){
		cout << i << endl;
	}
	cout << "---------------------------" << endl;
	/* Dung vong lap while:
		tham so 1: i = 0
		tham so 2: i <= 100
		tham so 3: i++
	*/
	int j = 0;
	while(j <= 100){
		cout << j << endl;
		j++;
	}
	cout << "----------------------------" << endl;
	/* Dung vong lap do - while:
		tham so 1: i = 0
		tham so 2: i <= 100
		tham so 3: i++
	*/
	int k = 0;
	do {
		cout << k << endl;
		k++;
	} while(k <= 100);
	return 0;
}
