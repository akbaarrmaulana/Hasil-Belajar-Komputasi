#include<iostream>

using namespace std;

int main(){
	int jpp,jpa,jph,th,hpa,hpp,hph,status,dis,tp,t,p;
	char ktp,ulang3;
	
	cout<<"=====  Program Kasir Pintar  =====\n";
	do{
	cout<<"\n====   Katalog   ====\n";
	cout<<"Paket Panas		: Rp 50.000\n";
	cout<<"Paket Hemat		: Rp 40.000\n";
	cout<<"Paket Anak		: Rp 30.000\n";
	
	hpp = 50000;
	hph = 40000;
	hpa = 30000;
	
	cout<<"\nJumlah Paket Panas	: ";
	cin>>jpp;
	cout<<"Jumlah Paket Hemat	: ";
	cin>>jph;
	cout<<"Jumlah Paket Anak	: ";
	cin>>jpa;
	
	th = jpp*hpp + jph*hph + jpa*hpa;
	cout<<"\nTotal Harga	= Rp "<<th;
	
	cout<<"\n\nStatus\n";
	cout<<"1. Pelajar / Mahasiswa\n";
	cout<<"2. Bukan Pelajar / Mahasiswa\n";
	cout<<"Status Anda : ";
	cin>>status;
	
	switch(status){
		case 1 : 
		cout<<"Apakah Anda Memiliki Kartu Tanda Pelajar/Mahasiswa ? (y/t) = ";
		cin>>ktp;

		if(ktp=='y'){
			dis = 0.5*th;
		}else if(ktp=='t'){
			dis = 0*th;
		}else{
			cout<<"\nAnda Salah Input";
		}
		break;
		case 2:
			dis = 0*th;
		break;
		default:
			cout<<"\nAnda Salah Input";
	}
	
	cout<<"\nTotal Potongan Harga	= Rp "<<dis;
	t = th - dis + th*0.1;
	p = th*0.1;
	cout<<"\nPajak			= Rp "<<p;
	cout<<"\nTotal Pembayaran	= Rp "<<t;
	
	cout<<"\n\n============================================\n";
	
	cout<<"\nUlangi Program?(y/t) : ";
			cin>>ulang3;
	}while(ulang3=='y');
}
