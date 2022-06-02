#include<iostream>

using namespace std;

int main(){
	int y[25],x=1,i;
	char a;
	bool prima=0;
	
//	while(x>=1){
//		cout<<"y "<<x<<" : ";
//		cin>>y[x];
//	}
	
	for(int i=1;i>=1;i++){
		cout<<"Data ke-"<<i<<" : ";
		cin>>y[i];
		if(y[i]==a){
			break;
		}
	}
	
	for(int i=1;i<=10;i++){
		for(int j=1;j<=y[i]/2;j++){
			if(y[i]%j!=0){
				prima = true;
		}
		}
		if(prima==true){
		cout<<y[i];
		cout<<endl;
	}
	}
}
