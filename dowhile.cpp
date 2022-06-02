#include<iostream>

using namespace  std;

int main(){
	int a=1;
	do{
		cout<<a<<endl;a++;
	}
	while(a<=10);
	
	int b=10;
	do{
		cout<<b<<endl;b--;
	}
	while(b>=1);
	
	char c='a';
	do{
		cout<<c<<endl;c++;
	}
	while(c<='j');
	
	char d='j';
	do{
		cout<<d<<endl;d--;
	}
	while(d>='a');
	
	int e=1;
	do{
		cout<<e<<endl;e=e+2;
	}
	while(e<=100);
	
	int f=0;
	do{
		cout<<f<<endl;f=f+2;
	}
	while(f<=100);
}
