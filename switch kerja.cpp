#include<iostream>

using namespace std;

int main(){
	int umur,a,gaji,tanggungan,b,c;
	string nama;
	
	cout<<"====    Program Deteksi Miskin / Bukan Miskin   ====\n\n";
	
	cout<<"Nama 		: ";
	getline(cin, nama);
	cout<<"Masukkan Umur Anda : "; 
	cin>>umur;
	
	if(umur>=18){
		cout<<"\nStatus Bekerja\n";
		cout<<"1. Sudah Bekerja\n";
		cout<<"2. Belum Bekerja\n";
		cout<<"\nMasukkan Status Bekerja (1/2) : ";
		cin>>a;
		
		switch(a){
			case 1 :
				cout<<"\nSudah Bekerja\n";
				cout<<"Pendapatan per bulan : ";
				cin>>gaji;
				cout<<"Jumlah Tanggungan : ";
				cin>>tanggungan;
				
				b = gaji/tanggungan;
				
				if(b<300000){
					cout<<"\nAnda Penduduk Miskin\n";
				}else{
					cout<<"\nAnda Bukan Penduduk Miskin\n";
				}
			break;
			case 2 :
				cout<<"\nBelum Bekerja\n";
				cout<<"Anda Penduduk Miskin\n";
			break;
			default:
				cout<<"\nAnda Salah Input\n";
		}
	}else{
		cout<<"\nStatus Sekolah (1/2)\n";
		cout<<"1. Masih Sekolah\n";
		cout<<"2. Tidak Sekolah\n";
		cout<<"\nMasukkan Status Sekolah : ";
		cin>>c;
		
		switch(c){
			case 1 :
				cout<<"\nAnda Bukan Penduduk Miskin\n";
			break;
			case 2 :
				cout<<"\nAnda Penduduk Miskin\n";
			break;
			default:
				cout<<"\nInput Anda Salah\n";
		}
	}
	cout<<"\nSelamat Program Anda Berjalan Dengan Baik";

}
