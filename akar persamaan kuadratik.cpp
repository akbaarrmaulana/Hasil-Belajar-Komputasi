#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float  a,b,c,D,x1,x2;
	
	cout<<">>>> Bismillahirrahmanirrahim <<<<\n\n";
	cout<<"Nama  : Akbar Maulana Ibrahim\n";
	cout<<"NRP   : 5003211036\n";
	cout<<"Kelas : ProgKomp B\n\n";
	cout<<"==== Program Mencari Akar-Akar persamaan Kuadrat ====\n\n";
	cout<<"ax^2 + bx + c = 0\n\n";
	
	cout<<"Nilai a : ";
	cin>>a;
	cout<<"Nilai b : ";
	cin>>b;
	cout<<"Nilai c : ";
	cin>>c;
	
	D=(b*b)-(4*a*c);
	cout<<"D = "<<D<<endl<<endl;
	
	if(D>0){
		x1 = (-b + sqrt(D)) /(2*a);
		x2 = (-b - sqrt(D))/(2*a);
		
		cout<<"Akar 1 : "<<x1<<endl;
		cout<<"Akar 2 : "<<x2;
	}else if(D==0){
		x1 = x2 = (-b + sqrt(D))/(2*a);
		
		cout<<"Akar 1 : "<<x1<<endl;
		cout<<"Akar 2 : "<<x2;
	}else{
		cout<<"Akar Imajiner";
	}
	
	cout<<"\n\nSelamat Program Anda Berhasil";
}
