#include <iostream>

using namespace std;
int main(){
	float nilai;
	
	cout<<"====  Program Konversi Nilai Ke Dalam Huruf ====\n\n";
	cout<<"Masukkan Nilai Anda : ";
	cin>>nilai;
	
	if(nilai>=85 && nilai<=100){
		cout<<"Hasil Konversi Nilai Anda adalah A\n";
		cout<<"Anda Dinyatakan Lulus";
	}else if(nilai>=76 && nilai<= 85){
		cout<<"Hasil Konversi Nilai Anda adalah AB\n";
			cout<<"Anda Dinyatakan Lulus";
	}else if(nilai>=66 && nilai<= 75){
		cout<<"Hasil Konversi Nilai Anda adalah B\n";
		cout<<"Anda Dinyatakan Lulus";
	}else if(nilai>=61 && nilai<= 66){
		cout<<"Hasil Konversi Nilai Anda adalah BC\n";
		cout<<"Anda Dinyatakan Lulus";
	}else if(nilai>=56 && nilai<= 60){
		cout<<"Hasil Konversi Nilai Anda adalah C\n";
		cout<<"Anda Dinyatakan Tidak Lulus";
	}else if(nilai>=41 && nilai<= 55){
		cout<<"Hasil Konversi Nilai Anda adalah D\n";
		cout<<"Anda Dinyatakan Tidak Lulus";
	}else if(nilai>=0 && nilai<= 40){
		cout<<"Hasil Konversi Nilai Anda adalah E\n";
		cout<<"Anda Dinyatakan Tidak Lulus";
	}else{
		cout<<"\nXXX=== Maaf Anda Salah Input Nilai ===XXX\n";
	}
}
