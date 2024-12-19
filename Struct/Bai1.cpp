/*
	1. Tao 1 struct luu tru thong tin nhan vien.
	Nhan vien bao gom nhung thong tin: ho ten, dia chi, so dien thoai, phong ban, luong
	a. Tao 1 bien co kieu du lieu la struct. Nhap va hien thi thong tin bien do
	b. Tao 1 mang co kieu du lieu la struct. Nhap, tinh tong luong cua cac nhan vien trong mang do.
*/

#include <iostream>
#include <cstring>
using namespace std;

/* Khai bao struct: struct co ten la nhanVien
co cac thuoc tinh: hoTen, diaChi, soDienThoai, phongBan */
struct nhanVien {
	string hoTen;
	string diaChi;
	string soDienThoai;
	string phongBan;
	int luong;
};

int main(){
	//Khai bao bien nv1 co kieu du lieu la struct nhanVien
	nhanVien nv1;
	//Nhap thong tin cho nv1
	//Nhap ten
	cout << "nv1 name: ";
	getline(cin, nv1.hoTen);
	//Nhap dia chi
	cout << "nv1 address: ";
	getline(cin, nv1.diaChi);
	//Nhap so dien thoai
	cout << "nv1 phone: ";
	getline(cin, nv1.soDienThoai);
	//Nhap phong ban
	cout << "nv1 department: ";
	getline(cin, nv1.phongBan);
	//Nhap luong
	cout << "nv1 salary: ";
	cin >> nv1.luong;
	//Hien thi thong tin cua nv1
	cout << "nv1 information: " << endl;
	cout << "Name: " << nv1.hoTen << endl;
	cout << "Address: " << nv1.diaChi << endl;
	cout << "Phone: " << nv1.soDienThoai << endl;
	cout << "Department: " << nv1.phongBan << endl;
	cout << "Salary: " << nv1.luong << endl;
	
	//Khai bao mang co kieu du lieu la struct
	nhanVien nv[3];
	//Nhap thong tin cho tung nhan vien
	for(int i = 0; i < 3; i++){
		//Nhap ten
		cout << "nv[" << i << "] name: ";
		getline(cin, nv[i].hoTen);
		//Nhap dia chi
		cout << "nv[" << i << "] address: ";
		getline(cin, nv[i].diaChi);
		//Nhap so dien thoai
		cout << "nv[" << i << "] phone: ";
		getline(cin, nv[i].soDienThoai);
		//Nhap phong ban
		cout << "nv[" << i << "] department: ";
		getline(cin, nv[i].phongBan);
		//Nhap luong
		cout << "nv[" << i << "] salary: ";
		cin >> nv[i].luong;
		/* Chong troi sau khi nhap so vi khi nhap so chuyen sang nhap
		chuoi se bi troi (bo qua) lenh nhap dau tien */
		cin.ignore();
	}
	
	//Tinh tong luong cac nhan vien
	int totalSalary = 0;
	for(int i = 0; i < 3; i++){
		totalSalary += nv[i].luong;
	}
	cout << "Total salary: " << totalSalary << endl;
}
