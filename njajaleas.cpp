#include<iostream>

using namespace std;
int main(){
	int n=10,k,temp[25][25],
	c[25][25] = {{1,87},{1,90},{1,86},{1,76},{1,84},{1,86},{1,92},{1,86},{1,100},{1,93}},
	y[25] = {82,83,90,71,90,87,97,90,52,88}, d[25][25];
	
//	for(int i=1;i<=n;i++){
//		cout<<"Masukkan nilai Y-"<<i<<" ";
//		cin>>y[i];
//	}
	for(int i=0;i<n;i++){
		for(int j=0+1;j<n;j++){
			if(y[i]>=y[j]){
				k=y[i];
				y[i]=y[j];
				y[j]=k;
			}
		}
	}
	
	cout<<endl<<"Data Urut\n";
	for(int i=0;i<n;i++){
		cout<<y[i]<<endl;
	}
	
//	int c[25][25];
//	
//	cout<<"\n\nMatriks\n\n";
//	for(int i=1;i<=10;i++){
//		for(int j=1;j<=2;j++){
//			if(j==2){
//				cout<<"Masukkan nilai x["<<i<<","<<j<<"] : ";
//				cin>>c[i][j];
//			}else{
//				c[i][j]=1;
//			}
//		}
//	}
//	
	cout<<"\n=  Tampilan Matriks  =\n\n";
	for(int i=0;i<10;i++){
		for(int j=0;j<2;j++){
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\n\n===   Hasil Tranpose Matriks   ===\n\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<10;j++){
			temp[j][i] = c[i][j];
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<10;j++){
			cout<<temp[j][i];
		}
		cout<<endl;
	}
	
//	int c[25][25] = {{1,1,1,1,1,1,1,1,1,1}, {87,90,86,76,84,86,92,86,100,93}}, 
//	y[25] = {82,83,90,71,90,87,97,90,52,88}, d[25][25];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<1;j++){
			d[i][j]=0;
			for(int k=0;k<10;k++){
				d[i][j]=d[i][j]+temp[i][k]*y[k];
			}
		}
		cout<<endl;
	}
	
	cout<<"\n=  Tampilan Matriks XtY  =\n\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<1;j++){
			cout<<d[i][j]<<"\t";
		}
		cout<<endl;
	}
}
