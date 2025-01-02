/*
	2. Khai bao struct hocSinh co nhung thuoc tinh:
		id, name, birthday, gender, phone, address, class, average mark
	a. Khai bao mang co n hoc sinh
	b. Nhap thong tin cua n hoc sinh
	c. Hien thi thong tin cua n hoc sinh
	d. Hien thi thong tin cua hoc sinh co diem trung binh cao nhat
	e. Sap xep mang theo thu tu tang dan cua diem trung binh
*/

#include <iostream>
#include <cstring>
using namespace std;

//Khai bao struct student
struct student{
	int id;
	string name;
	string birthday;
	string gender;
	string address;
	string phoneNumber;
	string classes;
	float averageMark;
};

int main(){
	//Khai bao n
	int n;
	//Nhap n
	cout << "total students: ";
	cin >> n;
	//a.Khai bao mang st co n phan tu, co kieu du lieu la student
	student st[n];
	//b.Nhap thong tin cho mang
	for(int i = 0; i < n; i++){
		cout << "student " << i << " id: ";
		cin >> st[i].id;
		cin.ignore();
		cout << "student " << i << " name: ";
		getline(cin, st[i].name);
		cout << "student " << i << " birthday: ";
		getline(cin, st[i].birthday);
		cout << "student " << i << " gender: ";
		getline(cin, st[i].gender);
		cout << "student " << i << " phone: ";
		getline(cin, st[i].phoneNumber);
		cout << "student " << i << " address";
		getline(cin, st[i].address);
		cout << "student " << i << " class: ";
		getline(cin, st[i].classes);
		cout << "student " << i << " average mark: ";
		cin >> st[i].averageMark;
	}
	
	//c.Hien thi thong tin cac sinh vien
	for(int i = 0; i < n; i++){
	    cout << "student information: " << endl;
	    cout << "id: " << st[i].id << endl;
	    cout << "name: " << st[i].name << endl;
	    cout << "birthday: " << st[i].birthday << endl;
	    cout << "gender: " << st[i].gender << endl;
	    cout << "phone: " << st[i].phoneNumber << endl;
	    cout << "address: " << st[i].address << endl;
	    cout << "class: " << st[i].classes << endl;
	    cout << "average mark: " << st[i].averageMark << endl;
	}
	
	//d. Hien thi thong tin cua hoc sinh co diem trung binh cao nhat
	//Gan max bang thuoc tinh averageMark cua phan tu dau tien cua mang st
	float max = st[0].averageMark;
	//Tim diem trung binh cao nhat
	for(int i = 0; i < n; i++){
		if(st[i].averageMark > max){
			max = st[i].averageMark;
		}
	}
	//Hien thi thong tin cua hoc sinh co diem trung binh = max
	for(int i = 0; i < n; i++){
		if(st[i].averageMark == max){
			cout << "student information: " << endl;
		    cout << "id: " << st[i].id << endl;
		    cout << "name: " << st[i].name << endl;
		    cout << "birthday: " << st[i].birthday << endl;
		    cout << "gender: " << st[i].gender << endl;
		    cout << "phone: " << st[i].phoneNumber << endl;
		    cout << "address: " << st[i].address << endl;
		    cout << "class: " << st[i].classes << endl;
		    cout << "average mark: " << st[i].averageMark << endl;
		}
	}
	
	//e. Sap xep mang theo thu tu tang dan cua diem trung binh
	student temp;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(st[i].averageMark > st[j].averageMark){
				temp.id = st[i].id;
				temp.name = st[i].name;
				temp.birthday = st[i].birthday;
				temp.address = st[i].address;
				temp.phoneNumber = st[i].phoneNumber;
				temp.gender = st[i].gender;
				temp.classes = st[i].classes;
				temp.averageMark = st[i].averageMark;
				
				st[i].id = st[j].id;
				st[i].name = st[j].name;
				st[i].birthday = st[j].birthday;
				st[i].address = st[j].address;
				st[i].phoneNumber = st[j].phoneNumber;
				st[i].gender = st[j].gender;
				st[i].classes = st[j].classes;
				st[i].averageMark = st[j].averageMark;
				
				st[j].id = temp.id;
				st[j].name = temp.name;
				st[j].birthday = temp.birthday;
				st[j].address = temp.address;
				st[j].phoneNumber = temp.phoneNumber;
				st[j].gender = temp.gender;
				st[j].classes = temp.classes;
				st[j].averageMark = temp;
			}
		}
	}
	cout << "The list after reorganized: " << endl;
	//Hien thi thu tu tang dan cua diem trung binh
	for(int i = 0; i < n; i++){
		cout << "id: " << st[i].id << endl;
	    cout << "name: " << st[i].name << endl;
	    cout << "birthday: " << st[i].birthday << endl;
	    cout << "gender: " << st[i].gender << endl;
	    cout << "phone: " << st[i].phoneNumber << endl;
	    cout << "address: " << st[i].address << endl;
	    cout << "class: " << st[i].classes << endl;
	    cout << "average mark: " << st[i].averageMark << endl;
	}
	return 0;
}

