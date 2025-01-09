/*
	Cau 2: Viet chuong trinh quan ly thong tin nhan vien va tinh luong cua nhan vien trong thang 1/2024, thong tin bao gom: ma nhan vien (khong co 2 nhan vien trung ma voi nhau), ho ten nhan vien, so ngay lam viec, luong co ban
- Nhap so luong nhan vien trong cong ty, so luong nhan vien khong it hon 10 và khong vuot qua 50
- Nhap danh sach nhan vien voi so luong vua nhap
- Hien thi danh sach nhan vien vua nhap
- Tim kiem thong tin cua 1 nhan vien theo ma nhan vien duoc nhap
- Tim nhan vien theo ten
- In ra danh sach nhan vien theo thu tu luong thuc te giam dan (biet luong thuc te = luong co ban * so ngay lam viec)
*/

#include <iostream>
#include <cstring>
using namespace std;

struct nhanVien {
	string maNhanvien;
	string hoTen;
	int soNgayLamViec;
	int luongCoBan;
	int luongThucTe;
};

int main(){
	//Khai bao so luong nhan vien
	int soLuong;
	do {
		cout << "Nhap so luong nhan vien: ";
		cin >> soLuong;
		if(soLuong < 10 || soLuong > 50){
			cout << "Nhap lai!" << endl;
		}
	} while(soLuong < 10 || soLuong > 50);
	//Khai bao mang nhan vien
	nhanVien nv[soLuong];
	//Nhap danh sach nhan vien
	for(int i = 0; i < soLuong; i++){
		cin.ignore();
		cout << "Ma nhan vien: ";
		getline(cin, nv[i].maNhanvien);
		cout << "Ho ten nhan vien: ";
		getline(cin, nv[i].hoTen);
		cout << "So ngay lam viec: ";
		cin >> nv[i].soNgayLamViec;
		cout << "Luong co ban: ";
		cin >> nv[i].luongCoBan;
		cout << "Luong thuc te: " << nv[i].luongCoBan * nv[i].soNgayLamViec << endl;
	}
	//Hien thi danh sach nhan vien
	cout << "Thong tin cac nhan vien vua duoc nhap!" << endl;
	for(int i = 0; i < soLuong; i++){
		cout << "Ma nhan vien: " << nv[i].maNhanvien << endl;
		cout << "Ho ten nhan vien: " << nv[i].hoTen << endl;
		cout << "So ngay lam viec: " << nv[i].soNgayLamViec << endl;
		cout << "Luong co ban: " << nv[i].luongCoBan << endl;
		cout << "Luong thuc te: " << nv[i].luongCoBan * nv[i].soNgayLamViec << endl;
	}
	//Tim kiem thong tin cua 1 nhan vien theo ma nhan vien duoc nhap
	//Khai bao ma
	string maCanTim;
	cout << "Nhap ma nhan vien can tim kiem: ";
	cin.ignore();
	getline(cin, maCanTim);
	//Hien thi thong tin nhan vien co ma can tim
	cout << "Thong tin cac nhan vien co ma duoc tim kiem!" << endl;
	for(int i = 0; i < soLuong; i++){
		//Tim kiem ma
		if(nv[i].maNhanvien.compare(maCanTim) == 0){
			cout << "Ma nhan vien: " << nv[i].maNhanvien << endl;
			cout << "Ho ten nhan vien: " << nv[i].hoTen << endl;
			cout << "So ngay lam viec: " << nv[i].soNgayLamViec << endl;
			cout << "Luong co ban: " << nv[i].luongCoBan << endl;
			cout << "Luong thuc te: " << nv[i].luongThucTe << endl;
		}
	}
	//Tim nhan vien theo ten
	//Khai bao ten can tim
	string tenCanTim;
	cout << "Nhap ten can tim";
	getline(cin, tenCanTim);
	//Hien thi thong tin nhung nhan vien co ten can tim
	cout << "Thong tin cac nhan vien co ten duoc tim kiem!" << endl;
	for(int i = 0; i < soLuong; i++){
		if(nv[i].hoTen.compare(tenCanTim) == 0){
			cout << "Ma nhan vien: " << nv[i].maNhanvien << endl;
			cout << "Ho ten nhan vien: " << nv[i].hoTen << endl;
			cout << "So ngay lam viec: " << nv[i].soNgayLamViec << endl;
			cout << "Luong co ban: " << nv[i].luongCoBan << endl;
			cout << "Luong thuc te: " << nv[i].luongThucTe << endl;
		}
	}
	//In ra danh sach nhan vien theo thu tu luong thuc te giam dan
	//Sap xep theo luong thuc te giam dan
	nhanVien temp;
	for(int i = 0; i < soLuong - 1; i++){
		for(int j = i + 1; j < soLuong; j++){
			if(nv[i].luongThucTe < nv[j].luongThucTe){
				temp.maNhanvien = nv[i].maNhanvien;
				temp.hoTen = nv[i].hoTen;
				temp.luongCoBan = nv[i].luongCoBan;
				temp.soNgayLamViec = nv[i].soNgayLamViec;
				temp.luongThucTe = nv[i].luongThucTe;
				
				nv[i].maNhanvien = nv[j].maNhanvien;
				nv[i].hoTen = nv[j].hoTen;
				nv[i].luongCoBan = nv[j].luongCoBan;
				nv[i].soNgayLamViec = nv[j].soNgayLamViec;
				nv[i].luongThucTe = nv[j].luongThucTe;
				
				nv[j].maNhanvien = temp.maNhanvien;
				nv[j].hoTen = temp.hoTen;
				nv[j].luongCoBan = temp.luongCoBan;
				nv[j].soNgayLamViec = temp.soNgayLamViec;
				nv[j].luongThucTe = temp.luongThucTe;
			}
		}
	}
	//In ra danh sach
	cout << "Thong tin cac nhan vien sau khi sap xep!" << endl;
	for(int i = 0; i < soLuong; i++){
		cout << "Ma nhan vien: " << nv[i].maNhanvien << endl;
		cout << "Ho ten nhan vien: " << nv[i].hoTen << endl;
		cout << "So ngay lam viec: " << nv[i].soNgayLamViec << endl;
		cout << "Luong co ban: " << nv[i].luongCoBan << endl;
		cout << "Luong thuc te: " << nv[i].luongThucTe << endl;
	}
	return 0;
}
