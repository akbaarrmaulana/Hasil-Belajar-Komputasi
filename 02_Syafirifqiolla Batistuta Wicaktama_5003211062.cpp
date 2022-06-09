#include<iostream>

using namespace std;

int main (){
	
	int i,j,x[10];
	float sigma,r,jumlah,kuadrat;
	
	cout<<"masukkan jumlah data = ";
	cin>>jumlah;
	
	for(i=1;i<=jumlah;i++){
		cout<<"masukkan data ke-"<<i<<" = ";cin>>x[i];
	}
	
	cout<<endl<<endl<<"tampilan data :";
	cout<<endl;
	
	//X kuadrat
	for(i=1;i<=jumlah;i++){
		kuadrat=1;
		
		for(j=1;j<=5;j++){
			kuadrat=kuadrat*x[i];
			cout<<kuadrat<<"\t";
		}
		
		cout<<endl;
	}

	//sigma
	for(i=1;i<=jumlah;i++){
		sigma=sigma+x[i];
	}
	
	r=sigma/jumlah;
	kuadrat=1;
	
	for(j=1;j<=5;j++){
		kuadrat=kuadrat*r;
		cout<<kuadrat<<"\t";
	}
}
