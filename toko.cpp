#include<iostream>

using namespace std;

int main(){
	
	int jka,jke,jc,hka,hke,hc,jb,dis,th,t;

	cout<<"=====  Program Kasir Pintar  =====\n\n";
	cout<<"====   Katalog Harga Barang   ====\n";
	cout<<"Kaos				: Rp 100.000\n";
	cout<<"Kemeja Batik		: Rp 150.000\n";
	cout<<"Celana Training	: Rp 175.000\n";
	
	cout<<"\nJumlah Kaos		: ";
	cin>>jka;
	cout<<"Jumlah Kemeja Batik	: ";
	cin>>jke;
	cout<<"Jumlah Celana Training	: ";
	cin>>jc;
	
	hka = 100000;
	hke = 150000;
	hc  = 175000;
	
	jb = jka + jke + jc;
	
	th = jka*hka + jke*hke + jc*hc;
	cout<<"\nTotal Harga 			= Rp "<<th;
	
	if(jb=2){
		dis = 0.15*th;
	}else if(jb=3 || jb<=4){
		dis = 0.2*th;
	}else if(jb>=5){
		dis = 0.35*th;
	}else{
		dis = 0*th;
	}
	
	cout<<"\nTotal Potongan Harga 		= Rp "<<dis;
	
	t = th - dis;
	cout<<"\nTotal Yang Harus Dibayar 	= Rp "<<t;
}
