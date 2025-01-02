/*
	4. Tao struct de quan ly thong tin san pham bao gom
	ten san pham, mau, kich thuoc, gia ban, so luong, nhan hieu
	a. Nhap thong tin n san pham voi n nhap tu ban phim
	b. Hien thi thong tin nhung san pham co gia thap nhat
	c. Hien thi thong tin nhung san pham co nhan hieu Gucci
	d. Sap xep danh sach san pham theo thu tu gia tang dan
	e. Hien thi thong tin nhung san pham co gia cao thu 2
	f. Hien thi thong tin nhung san pham co gia thap thu 3
*/

#include <iostream>
#include <cstring>
using namespace std;
struct product{
	string name;
	string color;
	string size;
	float price;
	int quantity;
	string brand;
};
int main(){
	//a
	int n;
	cout << "Input number of product: ";
	//Input number of product
	cin >> n;
	cin.ignore();
	product prd[n];
	//Input product's information
	for(int i = 0; i < n; i++){
		cout << "Product's information " << i + 1 << ": " << endl;
		cout << "Name: ";
		getline(cin, prd[i].name);
		cout << "Color: ";
		getline(cin, prd[i].color);
		cout << "Size: ";
		getline(cin, prd[i].size);
		cout << "price: ";
		cin >> prd[i].price;
		cout << "Quantity: ";
		cin >>prd[i].quantity;
		cin.ignore();
		cout << "Brand: ";
		getline(cin, prd[i].brand);
	}
	cout << "===================================" << endl;
	//b
	//Find min price
	float minPrice = prd[0].price;
	for(int i = 0; i < n; i++){
		if(minPrice > prd[i].price){
			minPrice = prd[i].price;
		}
	}
	//Display products that have price as min price
	for(int i = 0; i < n; i++){
		if(prd[i].price == minPrice){
			cout << "Products that have price as min price " << i + 1 << "): ";
			cout << "Name: " << prd[i].name << endl;
			cout << "Color: " << prd[i].color << endl;
			cout << "Size: " << prd[i].size << endl;
			cout << "price: " << prd[i].price << endl;
			cout << "Quantity: " << prd[i].quantity << endl;
			cout << "Brand: " << prd[i].brand << endl;
		}
	}
	cout << "===================================" << endl;
	//c
	for(int i = 0; i < n; i++){
		if(prd[i].brand.compare("Gucci") == 0){
			cout << "Products that have brand as Gucci: ";
			cout << "Name: " << prd[i].name << endl;
			cout << "Color: " << prd[i].color << endl;
			cout << "Size: " << prd[i].size << endl;
			cout << "Price: " << prd[i].price << endl;
			cout << "Quantity: " << prd[i].quantity << endl;
			cout << "Brand: " << prd[i].brand << endl;
		}
	}
	cout << "===================================" << endl;
	//d
	product temp;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(prd[i].price > prd[j].price){
				temp.name = prd[i].name;
				temp.color = prd[i].color;
				temp.size = prd[i].size;
				temp.price = prd[i].price;
				temp.quantity = prd[i].quantity;
				temp.brand = prd[i].brand;
				
				prd[i].name = prd[j].name;
				prd[i].color = prd[j].color;
				prd[i].size = prd[j].size;
				prd[i].price = prd[j].price;
				prd[i].quantity = prd[j].quantity;
				prd[i].brand = prd[j].brand;
				
				prd[j].name = temp.name;
				prd[j].color = temp.color;
				prd[j].size = temp.size;
				prd[j].price = temp.price;
				prd[j].quantity = temp.quantity;
				prd[j].brand = temp.brand;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << "Product's information " << endl;
		cout << "Name: " << prd[i].name << endl;
		cout << "Color: " << prd[i].color << endl;
		cout << "Size: " << prd[i].size << endl;
		cout << "price: " << prd[i].price << endl;
		cout << "Quantity: " << prd[i].quantity << endl;
		cout << "Brand: " << prd[i].brand << endl;
	}
	cout << "===================================" << endl;
	//e
	float maxPrice = prd[n - 1].price;
	float secondMaxPrice;
	
	for(int i = n - 1; i >= 0; i--){
		if(prd[i].price < maxPrice){
			secondMaxPrice = prd[i].price;
			break;
		} else {
			continue;
		}
	}
	
	for(int i = 0; i < n; i++){
		if(prd[i].price == secondMaxPrice){
			cout << "Product's information " << endl;
			cout << "Name: " << prd[i].name << endl;
			cout << "Color: " << prd[i].color << endl;
			cout << "Size: " << prd[i].size << endl;
			cout << "price: " << prd[i].price << endl;
			cout << "Quantity: " << prd[i].quantity << endl;
			cout << "Brand: " << prd[i].brand << endl;
		}
	}
	return 0;
}
