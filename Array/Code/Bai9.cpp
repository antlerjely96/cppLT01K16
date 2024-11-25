/*
	9. Nhap mang so nguyen co n phan tu.
	Sap xep cac phan tu cua mang theo chieu giam dan
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao n, temp
	int n, temp;
	//Nhap n
	cout << "Nhap so phan tu n: ";
	cin >> n;
	//Khai bao mang 
	int arr[n];
	//Nhap cac phan tu 
	for (int i = 0; i < n; i++ ){
		cout <<"Nhap arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Su dung thuat toan sap xep 
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (arr[i] < arr [j]){
				temp = arr [i];
				arr[i] = arr[j];
				arr[j] = temp;
				
			}
		}
	}
	//Hien thi ket qua
	cout << "Cac phan tu sau khi sap xep theo chieu giam dan la:\n";
	for (int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
	
	
	

