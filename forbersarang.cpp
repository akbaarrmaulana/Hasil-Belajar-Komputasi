#include<iostream>

using namespace  std;

int main(){

	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
//Soal 2A
	int a,b;
	for(a=1;a<=5;a++){
		for(b=5;b>=1;b--){
			cout<<b<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
//Soal 2B
	int c,d;
	for(c=1;c<=5;c++){
		for(d=5;d>=c;d--){
			cout<<d<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
//Soal 2C
	int f,g;
	for(f=5;f>=1;f--){
		for(g=1;g<=5;g++){
			cout<<f<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;

//Soal 2D
	int k,l;
	for(k=5;k>=1;k--){
		for(l=5;l>=k;l--){
			cout<<l<<" ";
		}
		cout<<endl;
	}
}
