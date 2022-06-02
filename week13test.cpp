#include<iostream>

using namespace std;

int main(){
//	int i, x;
//	for(i=1;i<=5;i++){
//		cout<<"Masukkan data ke-"<<i<<" : ";
//		cin>>x;
//	}
//	cout<<"\nHasil Input Data : \n\n";
//	for(i=5;i<=5;i++){
//		cout<<"Hasil data ke-"<<i<<" : "<<x<<endl;
//	}
	
//	int j, a[5];
//	for(j=1;j<=7;j++){
//		cout<<"Masukkan data ke-"<<j<<" : ";
//		cin>>a[j];
//	}
//	cout<<"\nHasil Input Data : \n\n";
//	for(j=1;j<=7;j++){
//	cout<<"Hasil data ke-"<<j<<" : "<<a[j]<<endl;
//	}
//	cout<<endl<<a[6];

//					int n,data[10];
//				    float avr,sum,var,a,b,c;
//				    
//				    cout<<"\n====>=>   2.Rata-rata   <=<====\n\n";
//				    cout<<"Banyaknya Data = ";cin>>n;
//				    cout<<endl;
//				    
//				    for (int i=1; i<=n; i++){
//				    	
//				           cout<<"Data ke-"<<i<<" = ";
//				           cin>>data[i];
//				           sum = sum + data[i];
//				        }
//				        
//				    avr = sum/n;
//				    cout<<"\nRata-rata = "<<avr<<endl;
//				    
//				    for(int i=1; i<=n; i++){
//				    	a=data[i]-avr;
//				    	 c = a*a;
//				    	 b = b+c;
//					}    
//				    var = b/(n-1);
//				    cout<<endl;
//				   	cout<<"Varians = "<<var<<endl;

	int b,n,i,j,k,x[50];
	float med;
	
	cout<<"n = ";cin>>n;
	for(b=1;b<=n;b++){
		cout<<"Data ke- "<<b<<" ";
		cin>>x[b];
		}
		for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(x[i]<=x[j]){
			k=x[i];
			x[i]=x[j];
			x[j]=k;
			}
		}
	}
	for(i=1;i<=n;i++){
	cout<<x[i]<<" ";
	}
	if(n%2==0){
		med = (x[n/2]+x[(n/2)+1]);
			cout<<endl<<endl<<"Median = "<<med/2;
	}else{
		med = x[(n+1)/2];
			cout<<endl<<endl<<"Median = "<<med;
	}
	

}

