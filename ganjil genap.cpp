#include <iostream>

using namespace std;

int main(){
	
	int A, B;
	
	cout<<"====  Program Deteksi Ganjil Genap  ====\n\n";
	cout<<"Masukkan Angka : ";
	cin>>A;
	
	B=A%2;
	if(B==0){
		cout<<"Angka "<<A<<" adalah genap";
		cout<<"\n\nSelamat Program Anda Berhasil";
	}else{
		cout<<"Angka "<<A<<" adalah ganjil";
		cout<<"\n\nSelamat Program Anda Berhasil";
	}
}
