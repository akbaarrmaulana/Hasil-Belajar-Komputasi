#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string nama, nrp;
	float tugas, kuis, ets, eas, kum;
	
	cout<<"===   Program Status Kelulusan Mata Kuliah Pemrograman Komputer   ===\n\n";
	cout<<"Nama		: ";
	getline(cin, nama);
	cout<<"NRP		: ";
	cin>>nrp;
	
	cout<<"\nNilai Tugas	: ";
	cin>>tugas;
	cout<<"Nilai Kuis	: ";
	cin>>kuis;
	cout<<"Nilai ETS	: ";
	cin>>ets;
	cout<<"Nilai EAS	: ";
	cin>>eas;
	
	kum = 0.2*tugas + 0.25*kuis + 0.25*ets + 0.3*eas;
	if(kum>85 && kum<=100){
		cout<<"\nHasil Konversi Nilai Anda adalah A\n";
	}else if(kum>76 && kum<= 85){
		cout<<"\nHasil Konversi Nilai Anda adalah AB\n";
	}else if(kum>65 && kum<= 75){
		cout<<"\nHasil Konversi Nilai Anda adalah B\n";
	}else if(kum>55 && kum<= 65){
		cout<<"\nHasil Konversi Nilai Anda adalah BC\n";
	}else if(kum>46 && kum<= 55){
		cout<<"\nHasil Konversi Nilai Anda adalah C\n";
	}else if(kum>35 && kum<= 45){
		cout<<"\nHasil Konversi Nilai Anda adalah D\n";
	}else if(kum>=0 && kum<= 35){
		cout<<"\nHasil Konversi Nilai Anda adalah E\n";
	}else{
		cout<<"\nXXX=== Maaf Anda Salah Input Nilai ===XXX\n";
	}		
	
	if(tugas>100 || kuis>100 || ets>100 || eas>100 || tugas<0 || kuis<0 || ets<0 || eas<0){
		cout<<"Data yang Input Anda Salah";
	}else{
		if(kum>=56 && kum<=100){
		cout<<nama<<" dengan nilai kumulatif "<<kum<<" dinyatakan Lulus";
		}else if(kum>=0 && kum<56){
		cout<<nama<<" dengan nilai kumulatif "<<kum<<" dinyatakan Tidak Lulus";
		}else{
		cout<<"\nData yang Anda Input salah";
		}
	}
	
}
