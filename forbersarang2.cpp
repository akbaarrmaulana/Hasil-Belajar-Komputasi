#include<iostream>

using namespace  std;

int main(){
	int m,a,b,n, fak=1, fak2=1, kombinasi;
	cout<<"m = ";
	cin>>m;
	cout<<"n = ";
	cin>>n;
	
if(m>n){

	for(int b=1; b<=m; b++){
	fak = fak*b;
}
	for(int a=1; a<=n; a++){
	fak = fak2*a;
}
	cout<<fak2;
	
	kombinasi = fak/fak2;
}else{
	cout<<"Salah Input";
}
}
