#include <iostream>
#include <math.h>

using namespace std;

main(){
	
		float alas,tinggi,miring;
		
		cout<<"====  Program Mencari Panjang Sisi Miring Segitiga Siku-siku  ====\n\n";
		cout<<"Masukkan sisi alas segitiga : ";
		cin>>alas;
		cout<<"Masukkan sisi tinggi segitiga : ";
		cin>>tinggi;
		
		miring =sqrt(pow(alas,2) + pow(tinggi,2));
		
		cout<<"Panjang sisi miring segitiga : "<<miring;
		cout<<"\n\nSelamat Program Anda Berhasil";
}
