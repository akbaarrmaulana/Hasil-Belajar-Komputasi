#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int i, j=0, k=1,l,n,a,b,sum,fak=1,m;

cout<<"==== Deret Fibonaci ====\n";
for(int i=1; i<=10; i++)
{
l=j+k;
k=j;
j=l;

cout<<l<<",";
}

cout<<"\n\n==== Jumlah Deret ====\n";
cout<<"n = ";
cin>>n;
for(int a=1; a<=n; a++){
	sum = sum+a;
}
cout<<sum;


cout<<"\n\n==== Faktorial ====\n";
cout<<"m = ";
cin>>m;
for(int b=1; b<=m; b++){
	fak = fak*b;
}
	cout<<fak;
}
