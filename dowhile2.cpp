#include<iostream>

using namespace  std;

int main(){
	
	cout<<">>>>  Bismillahirrahmanirrahim  <<<<\n\n";
	cout<<"====  Program Konversi Suhu  ====\n\n";
	
	float C, R, F, pilihan;
	char ulang;
	do{
	cout<<"1. Konversi Celcius ke Reamur\n";
	cout<<"2. Konversi Celcius ke Fahrenheit\n";
	cout<<"3. Konversi Celcius ke Reamur dan Fahrenheit\n\n";
	cout<<"1 / 2 / 3 : ";
	cin>>pilihan;
	
	if(pilihan==1){
	cout<<"Masukkan nilai suhu(dalam Celcius) : ";
	cin>>C;
	
	R=0.8*C;
	
	cout<<C<<" derajat Celcius = "<<R<<" derajat Reamur\n\n";
	cout<<"Selamat Konversi Anda Berhasil";
	}else if(pilihan==2){
	cout<<"Masukkan nilai suhu(dalam Celcius) : ";
	cin>>C;
	
	F=C*1.8+32;
	
	cout<<C<<" derajat Celcius = "<<F<<" derajat Fahrenheit\n\n";
	cout<<"Selamat Konversi Anda Berhasil";
	}else if(pilihan==3){
	cout<<"Masukkan nilai suhu(dalam Celcius) : ";
	cin>>C;
	
	R=0.8*C;
	F=C*1.8+32;
	cout<<C<<" derajat Celcius = "<<R<<" derajat Reamur\n";
	cout<<C<<" derajat Celcius = "<<F<<" derajat Fahrenheit\n\n";
	cout<<"Selamat Konversi Anda Berhasil";
	
	}else{
		cout<<"Salah input Mas";
	}
	cout<<"\n\nUlangi Program?(y/t) : ";
	cin>>ulang;
	}
	while(ulang=='y');
	
}
