/*
	8. Nhap mang so thuc co n phan tu.
	Sap xep cac phan tu cua mang theo chieu tang dan
*/

#include <iostream>
using namespace std;
int main(){
	//khai bao
	int n;
	//nhap n
	cout << "Nhap n: ";
	cin >> n;
	//khai bao mang
	float arr[n], temp;
	//vong lap de nhap mang
	for(int i = 0; i < n; i ++){
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}
	//vong lap de sap xep mang
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			//kiem tra va hoan doi vi tri neu so dung sau nho hon so phia truoc
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//in mang ra sau khi sap xep
	cout << "Mang sau khi sap xep la: ";
	for ( int i = 0; i < n; i++){
		cout << arr[i] << "\t";
	}
	return 0;
}
