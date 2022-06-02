#include <iostream>

using namespace std;

int main(){
	float angka;
	
	cout<<"====  Program Menentukan Angka Positif / Negatif  ====\n\n";
	cout<<"Masukkan Angka : ";
	cin>>angka;
	
	if(angka>0){
		cout<<angka<<" adalah angka Positif";
	}else if(angka<0){
		cout<<angka<<" adalah angka negatif";
	}else{
		cout<<"Nol";
	}
	cout<<"\n\nProgram Anda Berhasil";
}
