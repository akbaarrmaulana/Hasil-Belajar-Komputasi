#include<iostream>

using namespace  std;

int main(){

//Gambar 1
	int n;
//	
//	cout<<"n : ";cin>>n;
//	for(int i=1;i<=n+1;i++){
//		for(int j=1;j<=i;j++){
//			cout<<"*"<<" ";
//		}
//		cout<<endl;
//	}
//	for(int i=n;i>=1;i--){
//		for(int j=1;j<=i;j++){
//			cout<<"*"<<" ";
//		}
//		cout<<endl;
//	}
//	
////Gambar 2
//for (int i=1;i<=n;i++)
//    {
//        for (int j=i;j<n;j++)
//        {
//            cout<<" "; // segitiga kiri
//        }
//       
//        for (int j=1;j<=i;j++)
//        {
//            cout<<"*"; // segitiga kanan
//        }
//        cout<<endl;
//    }
//    for(int i=1;i<=n;i++){
//    	for(int j=1;j<=n;j++){
//    		cout<<"*";
//		}
//		cout<<endl;
//	}
//		for(int i=1;i<=n;i++){
//		for(int j=n;j>=i;j--){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	
////Gambar 3
//for (int i=1;i<n;i++)
//    {
//        for (int j=i;j<n;j++)
//        {
//            cout<<" "; 
//        }
//       
//        for (int j=1;j<=i;j++)
//        {
//            cout<<"*"<<" "; 
//        }
//        cout<<endl;
//	}
//for (int i=n;i>=1;i--)
//    {
//        for (int j=i;j<n;j++)
//        {
//            cout<<" "; 
//        }
//       
//        for (int j=1;j<=i;j++)
//        {
//            cout<<"*"<<" "; 
//        }
//        cout<<endl;
//	}
//	
//Gambar 4
	char x;
	cout<<"Masukkan n : ";cin>>n;
	cout<<"\nMasukkan karakter : ";cin>>x;
	cout<<endl;
	
	for(int i=1;i<=n/2;i++){
		for(int j=1;j<=2*n/2;j++){
			
			if(i==j){
				cout<<x;
			}else if(j==2*n/2+1-i){
				cout<<x;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	for(int i=1;i<=n/2;i++){
		for(int j=1;j<=2*n/2;j++){
			if(j==n/2+1-i){
				cout<<x;
			}else if(j==i+(n/2)){
				cout<<x;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}

//Soal 3

for(int i=1;i<=n;i++){
	for(int j=1;j<=i;j++){
		cout<<j<<" ";
	}
	cout<<endl;
}
}
