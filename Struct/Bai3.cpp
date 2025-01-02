/*
	3. Khai bao struct batDongSan. Bat dong san co cac thong tin sau:
		chieuDai, chieuRong, dienTich, chuVi
	a. Khai bao mang co n bat dong san
	b. Nhap thong tin cho cac bat dong san
	c. Tinh chu vi, dien tich cua tung bat dong san
	d. Hien thi thong tin bat dong san co dien tich lon nhat
	e. Tinh tien mua tung bat dong san, biet gia moi met vuong bang 18.750$
*/

#include <iostream>
using namespace std;
// tao struct
struct batDongSan{
	float chieuDai;
	float chieuRong;
	float chuVi;
	float dienTich;
};

int main(){
	//nhap so bat dong san trong mang
	int n;
	do {
		cout << "n = ";
		cin >> n;
		if(n < 1){
			cout << "Nhap lai n: " << endl;
		}
	} while (n < 1);
	
	//tao mang
	batDongSan bds[n];
	//chay vong lap de nhap thong tin bat dong san
	for(int i = 0; i < n; i++){
		cout << "BDS thu " << i + 1 << endl;
		//Nhap chieu dai
		do {
			cout << "Chieu dai: ";
			cin >> bds[i].chieuDai;
			if(bds[i].chieuDai <= 0){
				cout << "Nhap lai!" << endl;
			}
		} while(bds[i].chieuDai <= 0);
		//Nhap chieu rong
		do {
			cout << "Chieu rong: ";
			cin >> bds[i].chieuRong;
			if(bds[i].chieuRong <= 0){
				cout << "Nhap lai!" << endl;
			}
		} while(bds[i].chieuRong <= 0);
		
		//Tinh chu vi, dien tich
		for(int i = 0; i < n; i++){
			bds[i].chuVi = (bds[i].chieuDai + bds[i].chieuRong) * 2;
			bds[i].dienTich = bds[i].chieuDai * bds[i].chieuRong;
			cout << " Chu vi va dien tich cua bds thu " << i + 1 << " la: " << endl;
			cout << " Chu vi: " << bds[i].chuVi << endl;
			cout << " Dien tich: " << bds[i].dienTich << endl;
		}
		
		//Hien thi thong tin bat dong san co dien tich lon nhat
		float max = bds[0].dienTich;
		//tim bat dong san co dien tich lon nhat
		for(int i = 0; i < n; i++){
			if(bds[i].dienTich > max){
				max = bds[i].dienTich;
			}
		}
		for(int i = 0; i < n; i++){
			if(bds[i].dienTich == max){
				cout << "Bat dong san co dien tich lon nhat la: " << endl;
				cout << "Chieu dai: " << bds[i].chieuDai << endl;
				cout << "Chieu rong: " << bds[i].chieuRong << endl;
				cout << " Chu vi: " << bds[i].chuVi << endl;
				cout << " Dien tich: " << bds[i].dienTich << endl;
			}
		}
		
		//Tinh tien mua tung bat dong san, biet gia moi met vuong bang 18.750$
		float giaTien = 18750;
		for(int i = 0; i < n; i++){
			float tienMua = bds[i].dienTich * giaTien;
			cout << "gia tien cua bat dong san so " << i + 1 << " co gia la: " << tienMua << " $" << endl;
		}
	}
}

