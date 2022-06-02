#include<iostream>

using namespace std;

int main(){
	string nama;
	int tahun, 	umur;
	cout<<"Nama : ";
	getline(cin, nama);
	cout<<"Tahun Lahir : ";
	cin>>tahun;
	
	umur = 2022-tahun;
	
	cout<<nama<<" Umur "<<umur<<" Tahun";	
}
