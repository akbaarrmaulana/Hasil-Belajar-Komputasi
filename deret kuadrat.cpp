#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	cout<<"=============================\n\n";
	
	float fak=1,x,sum,fct,z;
	int m;
	
	cout<<"m = ";
	cin>>m;
	for(int b=1; b<=m; b++){
	fak = fak*b;
	fct = 1/fak;
	sum = sum + fct;
	cout<<fct<<" + ";
}	
	cout<<"\n\nHasil = "<<sum;
	
	
	cout<<"\n\n=============================\n\n";
	
	int a,n,b=0,i,c;
	
	cout<<"Masukkan n = ";
	cin>>n;
	cout<<endl;
	
	for(i=1; i<=n; i++){
		b = 2*i-2;
		a = pow(2,b);
		if(i%2==0){
			c = -a;
		}else{
			c = a;
		}
		cout<<c<<", ";
	}
	cout<<"\n\n=============================\n\n";
	
	int f,g,h,o;
	
	cout<<"Masukkan h = ";
	cin>>h;
	cout<<endl;
	
	for(f=h;f>=1;f--){
		cout<<f*10<<"  ";
		for(g=f;g>=1;g--){
			cout<<g<<" ";
		}
		cout<<endl;
	}
	for(o=1; o<=10; o++){
		cout<<o<<" ";
	}
	cout<<"\n=============================";
}
