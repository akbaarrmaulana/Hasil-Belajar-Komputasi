#include<iostream>

using namespace std;

int main()

{
	
	float fact=1,ovr,n;
	cout<<"n = ";
	cin>>n;
	for(int x = 1; x<=n; x++){
	fact=1/(x*fact);
	}
	for(int y = 1; y<=n; y++){
	ovr=1+fact;
	}
	cout<<ovr;
	
}
