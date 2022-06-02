#include<iostream>

using namespace std;

int main(){
	int p,j;
	
	cout<<"====   TIKET KERETA API   ====\n\n";
	cout<<"Pilihan 1. EKONOMI  = Rp 150.000/orang\n";
	cout<<"Pilihan 2. BISNIS  = Rp 250.000/orang \n";
	cout<<"Pilihan 3. EKSEKUTIF  = Rp 375.000/orang\n\n";
	cout<<"Masukkan Pilihan : ";
	cin>>p;
	cout<<"Jumlah Tiket : ";
	cin>>j;
	
	switch(p){
		case 1:
			cout<<"\nTotal Bayar "<<150000*j;
		break;
		case 2:
			cout<<"\nTotal Bayar "<<250000*j;
		break;
		case 3:
			cout<<"\nTotal Bayar "<<375000*j;
		break;
		default:
			cout<<"\nError : SALAH INPUT !!!";
	}
	
}
