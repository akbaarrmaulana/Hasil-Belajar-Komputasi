#include<iostream>

using namespace std;

int main(){
	const float phi=3.14;
	float L,r;
	
	cout<<"====   Menghitung Luas Lingkaran   ====\n\n";
	cout<<"Jari-jari Lingkaran : ";
	cin>>r;
	
	L = phi*r*r;
	
	cout<<"\n\nLuas Lingkaran = "<<L<<" cm^2";
	cout<<"\nSelamat Program Anda Berjalan";
}


