#include<iostream>

using namespace  std;

int main(){

	float fak=1,x,sum,fct;
	int m;
	
	cout<<"m = ";
	cin>>m;
	for(int b=1; b<=m; b++){
	fak = fak*b;
	fct = 1/fak;
	sum = sum + fct;
}	
	cout<<sum;

}
