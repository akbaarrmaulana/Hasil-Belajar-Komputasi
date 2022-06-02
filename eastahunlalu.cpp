#include<iostream>
#include<math.h>

using namespace std;
int main(){
	
//	Nomer 1
//	int y[25] = {82,83,90,71,90,87,97,34,90,52,88},
//	k,n,x,p,total = 0, count=0;
//	bool prima=false,prime;
//	
//	n=11;
//	
///*	for(int i=1;i<=n;i++){
//		cout<<"Masukkan nilai Y-"<<i<<" ";
//		cin>>y[i];
//	}*/
//	for(int a=1;a<=n;a++){
//		for(int b=a+1;b<=n;b++){
//			if(y[a]>=y[b]){
//				k=y[a];
//				y[a]=y[b];
//				y[b]=k;
//	}
//		}
//	}
//	
////	cout<<endl<<"Data Urut\n";
////	for(int a=1;a<=n;a++){
////		cout<<y[a]<<endl;
////	}
//	
////	Quartil ke 1
//	x = (n+1)/4;
//	cout<<endl<<"Hasil Q1= "<<y[x];
////	Quartil ke 3
//	p = 3*(n+1)/4;
//	cout<<endl<<"Hasil Q3 = "<<y[p];
//	
////	Jumlah Bilangan Prima
///*	cout<<endl;
//	for(int i=1;i<=n;i++){
//		for(int j=2;j<=y[i]/2;j++){
//			if(y[i]%j==0){
//				prima = false;
//			}else{
//				prima = true;
//			}
//		}
//		if(prima==true){
//		cout<<y[i]<<"\t";
//		total = total+1;
//	}
//	}
//	cout<<endl<<total<<endl;*/
//	
//	for(int i=1;i<=n;i++){
//		prime = 0;
//		for(int j=2;j<y[i];j++){
//			if(y[i]%j==0){
//				prime += 1;
//			}
//		}
//		if(prime == 0 and y[i] != 1 and y[i] != 0){
//			cout<<y[i]<<" ";
//			count += 1;
//		}
//	}
//	cout<<endl;
//	cout<<"Jumlah Bilangan Prima : "<<count;
//
//	cout<<"\n\nNilai Y setelah data dihapus\n";
//	for(int a=1;a<=n;a++){
//		if(y[a]>=50){
//		cout<<y[a]<<endl;
//		}
//	}
//	
////	Nomer 2
//	int c[25][25] = {{1,87},{1,90},{1,86},{1,76},{1,84},{1,86},{1,92},{1,86},{1,100},{1,93}};
//	
///*	cout<<"\n\nMatriks\n\n";
//	for(int i=1;i<=10;i++){
//		for(int j=1;j<=2;j++){
//			if(j==2){
//				cout<<"Masukkan nilai x["<<i<<","<<j<<"] : ";
//				cin>>c[i][j];
//			}else{
//				c[i][j]=1;
//			}
//		}
//	}*/
//	
//	cout<<"\n=  Tampilan Matriks  =\n\n";
//	for(int i=0;i<10;i++){
//		for(int j=0;j<2;j++){
//			cout<<c[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
////	Nomer 3
//
//	int d[25][25],m[25][25];
//	
//	cout<<"\n\n===   Hasil Tranpose Matriks   ===\n\n";
//	for(int i=0;i<2;i++){
//		for(int j=0;j<10;j++){
//			m[i][j] = c[j][i];
//			cout<<m[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			d[i][j]=0;
//			for(int k=0;k<10;k++){
//				d[i][j]=d[i][j]+m[i][k]*c[k][j];
//			}
//		}
//		cout<<endl;
//	}
//	
//	cout<<"\n=  Tampilan Matriks XtX  =\n\n";
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			cout<<d[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//	int e,f,g,h,temp;
//	float inv[25][25],pinv,pinvv;
//	
//	e = d[0][0];
//	f = d[0][1];
//	g = d[1][0];
//	h = d[1][1];
//	
//	cout<<endl<<e<<endl;
//	cout<<f<<endl;
//	cout<<g<<endl;
//	cout<<h<<endl;
//	
//	pinv = (e*h-f*g);
//	pinvv = 1/pinv;
//	cout<<endl<<pinvv;
//	
//	temp = d[0][0];
//	d[0][0] = d[1][1];
//	d[1][1] = temp;
//	d[0][1] = -d[0][1];
//	d[1][0] = -d[1][0];
//	
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			inv[i][j]= pinvv*d[i][j];
//		}
//	}
//	
//	cout<<"\n\nTampilan Matriks Xtx invers\n\n";
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			cout<<inv[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//	int o[25][25];
//	
//	for(int i=0;i<2;i++){
//		for(int j=0;j<1;j++){
//			for(int k=0;k<10;k++){
//				o[i][j] = o[i][j] + m[i][k]*y[k];
//			}
//		}
//		cout<<endl;
//	}
//	
//	cout<<"\n=  Tampilan Matriks XtY  =\n\n";
//	for(int i=0;i<2;i++){
//		for(int j=0;j<1;j++){
//			cout<<o[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//	o[0][0] = 830;
//	o[1][0] = 73191;
//	
//	float bb[25][25];
//
//	for(int i=0;i<2;i++){
//		for(int j=0;j<1;j++){
//			d[i][j]=0;
//			for(int k=0;k<2;k++){
//				bb[i][j]=bb[i][j]+inv[i][k]*o[k][j];
//			}
//		}
//		cout<<endl;
//	}
//	
//	cout<<"\nb0 = "<<bb[0][0];
//	cout<<"\nb1 = "<<bb[1][0]<<endl;
	
//	Nomer 4
	float x1[25] = {4.1,2.2,2.7,6,8.5,4.1,9,8,7.5},
		y1[25] = {2.1,1.5,1.7,2.5,3,2.1,3.2,2.8,2.5}, sumx, xbar,sdx,sumy,ybar,sdy,
		resx,resxx,resxxx,resy,resyy,resyyy, xy[25][25],yx[25][25],ztz[25][25],kor[25][25];
		int n=9;
//	float x1[25], y1[25];
	
/*	for(int i=0;i<9;i++){
		cout<<"Masukkan nilai X-"<<i<<" ";
		cin>>x1[i];
		cout<<"Masukkan nilai Y-"<<i<<" ";
		cin>>y1[i];
	}*/
	
	for(int i=0;i<9;i++){
		sumx += x1[i];
	}
	xbar = sumx/n;
	
	for(int i=0;i<9;i++){
		sumy += y1[i];
	}
	ybar = sumy/n;
	
	cout<<sumx<<" "<<xbar<<" "<<sumy<<" "<<ybar;
	
	for(int i=0;i<9;i++){
		resx = x1[i] - xbar;
		resxx = resx*resx;
		resxxx += resxx;
	}
	sdx = resxxx/(n-1);
	cout<<endl<<sqrt(sdx);
	
	for(int i=0;i<9;i++){
		resy = y1[i] - ybar;
		resyy = resy*resy;
		resyyy += resyy;
	}
	sdy = resyyy/(n-1);
	cout<<endl<<sqrt(sdy);
	
	for(int i=0;i<9;i++){
		for(int j=0;j<2;j++){
			if(j==0){
				xy[i][j] = (x1[i]-xbar)/sqrt(sdx);	
			}else{
				xy[i][j] = (y1[i]-ybar)/sqrt(sdy);
			}
		}
	}
	
	cout<<endl<<"Matriks Z"<<endl;
	for(int i=0;i<9;i++){
		for(int j=0;j<2;j++){
			cout<<xy[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\nMatriks Z Tranpose\n";
		for(int i=0;i<2;i++){
			for(int j=0;j<9;j++){
				yx[i][j] = xy[j][i];
				cout<<yx[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\nPerkalian ZtZ\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			ztz[i][j]=0;
			for(int k=0;k<9;k++){
				ztz[i][j] += yx[i][k]*xy[k][j];
			}
		}
		cout<<endl;
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<ztz[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\nHasil Matriks Korelasi\n";
		for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			kor[i][j] = ztz[i][j]/(n-1);
			cout<<kor[i][j]<<"\t";
		}
		cout<<endl;
	}
}
