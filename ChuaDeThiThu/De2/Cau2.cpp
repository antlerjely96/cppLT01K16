/*
	Cau 2: Viet chuong trinh quan ly diem mon tin hoc cua mot lop. Thong tin cua cac hoc sinh trong lop do bao gom: ma hoc sinh (khong co 2 hoc sinh trung ma voi nhau), ho ten hoc sinh, diem 15 phut, diem 1 tiet, diem hoc ky
- Nhap so luong hoc sinh trong lop, so luong hoc sinh khong it hon 15 và không vuot qua 30
- Nhap danh sach hoc sinh voi so luong vua nhap
- Hien thi danh sach hoc sinh vua nhap
- Tim kiem thong tin cua 1 hoc sinh theo ma hoc sinh duoc nhap
- Tim hoc sinh theo ten
- In ra danh sach hoc sinh theo thu tu diem trung bình tang dan (biet diem trung binh = (diem 15 phut + diem 1 tiet * 2 + diem hoc ky * 3) / 6)
*/

#include <iostream>
using namespace std;

struct hocSinh{
	string maHocSinh;
	string tenHocSinh;
	float diem15Phut;
	float diem1Tiet;
	float diemHocKy;
	float diemTrungBinh;
};
int main(){
	//Khai bao so luong
	int soLuong;
	//Nhap so luong
	do{
		cout << "Nhap so luong hoc sinh: ";
		cin >> soLuong;
		if(soLuong < 15 || soLuong > 30){
			cout << "Nhap lai!" << endl;
		}
	} while(soLuong < 15 || soLuong > 30);
	//Khai bao mang hs
	hocSinh hs[soLuong];
	//Nhap danh sach hoc sinh
	cout << "Nhap danh sach hoc sinh!" << endl;
	for(int i = 0; i < soLuong; i++){
		cin.ignore();
		cout << "Ma hoc sinh: ";
		getline(cin, hs[i].maHocSinh);
		cout << "Ten hoc sinh";
		getline(cin, hs[i].tenHocSinh);
		cout << "Diem 15 phut";
		cin >> hs[i].diem15Phut;
		cout << "Diem 1 tiet";
		cin >> hs[i].diem1Tiet;
		cout << "Diem hoc ky";
		cin >> hs[i].diemHocKy;
		hs[i].diemTrungBinh = (hs[i].diem15Phut + hs[i].diem1Tiet * 2 + hs[i].diemHocKy * 3) / 6;
		cout << "Diem trung binh: " << hs[i].diemTrungBinh;
	}
	//Hien thi danh sach hoc sinh vua nhap
	cout << "Danh sach hoc sinh vua nhap!" << endl;
	for(int i = 0; i < soLuong; i++){
		cout << "Ma hoc sinh: " << hs[i].maHocSinh << endl;
		cout << "Ten hoc sinh" << cin, hs[i].tenHocSinh << endl;
		cout << "Diem 15 phut" << hs[i].diem15Phut << endl;
		cout << "Diem 1 tiet" << hs[i].diem1Tiet << endl;
		cout << "Diem hoc ky" << hs[i].diemHocKy << endl;
		cout << "Diem trung binh: " << hs[i].diemTrungBinh << endl;
	}
	//Tim hoc sinh theo ma
	//Khai bao ma can tim
	string maCanTim;
	cout << "Nhap ma hoc sinh can tim: ";
	cin.ignore();
	getline(cin, maCanTim);
	cout << "Thong tin hoc sinh duoc tim thay nhu sau: " << endl;
	//Hien thi hoc sinh theo ma duoc nhap
	for(int i = 0; i < soLuong; i++){
		if(hs[i].maHocSinh.compare(maCanTim) == 0){
			cout << "Ma hoc sinh: " << hs[i].maHocSinh << endl;
			cout << "Ten hoc sinh" << cin, hs[i].tenHocSinh << endl;
			cout << "Diem 15 phut" << hs[i].diem15Phut << endl;
			cout << "Diem 1 tiet" << hs[i].diem1Tiet << endl;
			cout << "Diem hoc ky" << hs[i].diemHocKy << endl;
			cout << "Diem trung binh: " << hs[i].diemTrungBinh << endl;
		}
	}
	//Tim hoc sinh theo ten
	//Khai bao ten can tim
	string tenCanTim;
	cout << "Nhap ten hoc sinh can tim kiem: ";
	getline(cin, tenCanTim);
	cout << "Thong tin hoc sinh duoc tim thay nhu sau: " << endl;
	for(int i = 0; i < soLuong; i++){
		if(hs[i].tenHocSinh.compare(tenCanTim) == 0){
			cout << "Ma hoc sinh: " << hs[i].maHocSinh << endl;
			cout << "Ten hoc sinh" << cin, hs[i].tenHocSinh << endl;
			cout << "Diem 15 phut" << hs[i].diem15Phut << endl;
			cout << "Diem 1 tiet" << hs[i].diem1Tiet << endl;
			cout << "Diem hoc ky" << hs[i].diemHocKy << endl;
			cout << "Diem trung binh: " << hs[i].diemTrungBinh << endl;
		}
	}
	//In ra danh sach hoc sinh theo thu tu diem trung bình tang dan
	//Khai bao temp
	hocSinh temp;
	//Sap xep
	for(int i = 0; i < soLuong - 1; i++){
		for(int j = i + 1; j < soLuong; j++){
			if(hs[i].diemTrungBinh > hs[j].diemTrungBinh){
				temp = hs[i];
				hs[i] = hs[j];
				hs[j] = temp;
			}
		}
	}
	//Hien thi
	cout << "Danh sach hoc sinh sau khi sap xep!" << endl;
	for(int i = 0; i < soLuong; i++){
		cout << "Ma hoc sinh: " << hs[i].maHocSinh << endl;
		cout << "Ten hoc sinh" << cin, hs[i].tenHocSinh << endl;
		cout << "Diem 15 phut" << hs[i].diem15Phut << endl;
		cout << "Diem 1 tiet" << hs[i].diem1Tiet << endl;
		cout << "Diem hoc ky" << hs[i].diemHocKy << endl;
		cout << "Diem trung binh: " << hs[i].diemTrungBinh << endl;
	}
	return 0;
}
