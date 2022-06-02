#include<iostream>

using namespace  std;

int main(){
	int i;
	i=1;
	while(i<=10){
		cout<<"Saya Akbar\n";i++;
	}
	
	int a;
	a=1;
	do{
		cout<<"Saya Bukan Akbar\n";a++;
	}
	while(a<=5);
	
	int b;
	b=1;
	while(b<=10){
		cout<<b<<"\n";b++;
	}
	
	int c;
	c=10;
	while(c>=1){
		cout<<c<<"\n";c--;
	}
	
	char d;
	d='a';
	while(d<='j'){
		cout<<d<<"\n";d++;
	}
	
	char e;
	e='j';
	while(e>='a'){
		cout<<e<<endl;e--;
	}
	
	int f;
	f=1;
	while(f<=100){
		cout<<f<<endl;f=f+2;
	}
	
	int g;
	g=0;
	while(g<=100){
		cout<<g<<endl;g=g+2;
	}
}
