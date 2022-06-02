#include<iostream>

using namespace std;

int main(){
	int baris1,kolom1,baris2,kolom2,x[25][25],y[25][25],h[25][25],c[25][25];
	
	cout<<"=== Matriks ===\n\n";
	
	cout<<"Jumlah Baris : ";cin>>baris1;
	cout<<"Jumlah Kolom : ";cin>>kolom1;
	
	cout<<"\n=  Matriks 1  =\n\n";
	for(int i=1;i<=baris1;i++){
		for(int j=1;j<=kolom1;j++){
			cout<<"Baris ke- "<<i<<" kolom ke- "<<j<<" ";
			cin>>x[i][j];
		}
	}
	
	cout<<"Jumlah Baris : ";cin>>baris2;
	cout<<"Jumlah Kolom : ";cin>>kolom2;
	
	cout<<"\n=  Matriks 2  =\n\n";
	for(int i=1;i<=baris2;i++){
		for(int j=1;j<=kolom2;j++){
			cout<<"Baris ke- "<<i<<" kolom ke- "<<j<<" ";
			cin>>y[i][j];
		}
	}
	
	cout<<"\n=  Tampilan Matriks 1  =\n\n";
	for(int i=1;i<=baris1;i++){
		for(int j=1;j<=kolom1;j++){
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"\n=  Tampilan Matriks 2  =\n\n";
	for(int i=1;i<=baris2;i++){
		for(int j=1;j<=kolom2;j++){
			cout<<y[i][j]<<"\t";
		}
		cout<<endl;
	}
	
//	cout<<"\n\n===   Hasil Penjumlahan Matriks   ===\n\n";
//	for(int i=1;i<=baris1;i++){
//		for(int j=1;j<=kolom1;j++){
//			h[i][j] = x[i][j] + y[i][j];
//			cout<<h[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//	cout<<"\n\n===   Hasil Pengurangan Matriks   ===\n\n";
//	for(int i=1;i<=baris1;i++){
//		for(int j=1;j<=kolom1;j++){
//			h[i][j] = x[i][j] - y[i][j];
//			cout<<h[i][j]<<"\t";
//		}
//		cout<<endl;
//	}

		
	for(int i=1;i<=baris1;i++){
		for(int j=1;j<=kolom2;j++){	
			c[i][j]=0;
			for(int k=1;k<=baris2;k++){
				c[i][j]=c[i][j]+x[i][k]*y[k][j];
				
			}
		}
		cout<<endl;
	}
	
	cout<<"\n=  Hasil Perkalian Matriks  =\n\n";
	for(int i=1;i<=baris1;i++){
		for(int j=1;j<=kolom2;j++){
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	
//	cout<<"\n\n===   Hasil Tranpose Matriks 1   ===\n\n";
//	for(int i=1;i<=baris1;i++){
//		for(int j=1;j<=kolom1;j++){
//			cout<<x[j][i]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//	cout<<"\n\n===   Hasil Tranpose Matriks 2   ===\n\n";
//	for(int i=1;i<=baris2;i++){
//		for(int j=1;j<=kolom2;j++){
//			cout<<y[j][i]<<"\t";
//		}
//		cout<<endl;
//	}

	cout<<"\n\n===   Hasil Tranpose Matriks   ===\n\n";
	for(int i=1;i<=kolom2;i++){
		for(int j=1;j<=baris1;j++){
			cout<<c[j][i]<<"\t";
		}
		cout<<endl;
	}
}
