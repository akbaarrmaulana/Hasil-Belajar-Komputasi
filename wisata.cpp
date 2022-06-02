#include<iostream>

using namespace std;

int main(){
	int jta,jtd,t,ht,k,jk,total,hk;
	
	cout<<"====    Program Tiket Masuk Tempat Wisata    ====\n\n";
	cout<<"-- Harga Tiket Masuk --\n";
	cout<<"Anak-anak : @anak Rp 50.000\n";
	cout<<"Dewasa	: @orang Rp 100.000\n\n";
	cout<<"Jumlah Tiket Anak-anak	: ";
	cin>>jta;
	cout<<"Jumlah Tiket Dewasa	: ";
	cin>>jtd;
	
	cout<<"\nJenis Kendaraan\n";
	cout<<"1. Bus (@Bus Rp 20.000)\n";
	cout<<"2. Mobil (@Mobil Rp 10.000)\n";
	cout<<"3. Motor (@Motor Rp 5.000)\n";
	cout<<"\nJenis Kendaraan 	: ";
	cin>>k;
	switch(k){
		case 1 :
			hk = 20000;
			break;
		case 2 :
			hk = 10000;
			break;
		case 3 : 
			hk = 5000;
		break;
		default:
			cout<<"Anda Salah Input\n";
	}
	
	cout<<"Jumlah Kendaraan	: ";
	cin>>jk;
	
	total = 50000*jta + 100000*jtd + jk*hk;
	cout<<"\nTotal Pembayaran Anda = Rp "<<total;
	
}
