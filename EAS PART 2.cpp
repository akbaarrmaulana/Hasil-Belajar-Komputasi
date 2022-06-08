#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i,j,jmlprim,jmlnoprim,x[100000],a,k;
	float A[10000],B[10000],AA[100],BB[100];
//	float A[100] ={29,31,11,47,37},AA[100]= {29,31,11,47,37},
//		B[100]={27,30,21,49,36},BB[100]= {27,30,21,49,36};
	for(i=0;i<=1000;i++)
	{
		cout<<"Masukkan Bilangan ke-"<<i+1<<" : ";cin>>x[i];
		a=0;
		if(x[i]==a)
		{
			break;
		}
	}
	jmlprim=0;
	jmlnoprim=0;
	for(i=0;i<=1000;i++)
	{
		for(j=2;j<=x[i];j++)
		{
			if(x[i]==1)
		{
			jmlnoprim=jmlnoprim+1;
			B [jmlnoprim]=x[i];
			break;
		}
		if(j==x[i])
		{
			jmlprim=jmlprim+1;
			A[jmlprim]=AA[jmlprim]=x[i];
			break;
		}
		if(x[i]%j==0)
		{
			jmlnoprim=jmlnoprim+1;
			B[jmlnoprim]=BB[jmlnoprim]=x[i];
			break;
		}
		}
	}
	cout<<"Variable A"<<endl;
	for(i=1;i<=jmlprim;i++)
	{
		cout<<AA[i]<<" ";
	}
	cout<<"\nVariable B"<<endl;
	for(i=1;i<=jmlnoprim;i++)
	{
		cout<<BB[i]<<" ";
	}
	cout<<"\nMengurutkan Kedua Variabel"<<endl;
	cout<<"Variable A : ";
	for(i=1;i<=jmlprim;i++)
	{
		for(j=i+1;j<=jmlprim;j++)
		{
			if(A[i]>=A[j])
			{
				k=A[i];
				A[i]=A[j];
				A[j]=k;
			}
		}
	}
	for(i=1;i<=jmlprim;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<"\nVariable B : ";
	for(i=1;i<=jmlnoprim;i++)
	{
		for(j=i+1;j<=jmlnoprim;j++)
		{
			if(B[i]>=B[j])
			{
				k=B[i];
				B[i]=B[j];
				B[j]=k;
			}
		}
	}
	for(i=1;i<=jmlnoprim;i++)
	{
		cout<<B[i]<<" ";
	}
	int yA1,yB1;
	float zA1,zB1,QA1,QB1,wA1,wB1,ntot,ntot2;
	wA1=(jmlprim+1);
	ntot=wA1/4;
	yA1=trunc(ntot);
	zA1=(ntot)-yA1;
	QA1=A[yA1]+(zA1*(A[yA1+1]-A[yA1]));
	wB1=(jmlnoprim+1);
	ntot2=wB1/4;
	yB1=trunc(ntot2);
	zB1=(ntot2)-yB1;
	QB1=B[yB1]+(zB1*(B[yB1+1]-B[yB1]));
	cout<<"\nMaka Kuartil 1 Variable A : "<<QA1<<endl;
	
	int G[100][100];
	cout<<"Menggabungkan 2 Variable : "<<endl; 
	for(i=1;i<=jmlprim;i++)
	{
		G[1][i]=AA[i];
		G[2][i]=BB[i];		
	}
	for(i=1;i<=jmlprim;i++)
	{
		cout<<G[1][i]<<" "<<G[2][i]<<endl;
	}
	
//	Rata-rata A
	float suma, avea;
	for(int i=1;i<=jmlprim;i++){
		suma = suma+AA[i];
	}
	avea = suma/jmlprim;
	cout<<endl<<avea;

//	Rata-rata A
	float sumb, aveb;
	for(int i=1;i<=jmlnoprim;i++){
		sumb = sumb+BB[i];
	}
	aveb = sumb/jmlnoprim;
	cout<<endl<<aveb;
	
//	Varians A
	float resx,resxx,resxxx,sdx,var;
	for(int i=1;i<=jmlprim;i++){
		resx = AA[i] - avea;
		resxx = resx*resx;
		resxxx += resxx;
	}
	var = resxxx/(jmlprim-1);
	sdx=sqrt(var);
	cout<<endl<<sdx;
	
//	Varians B
	float resb,resbb,resbbb,sdb,varb;
	for(int j=1;j<=jmlnoprim;j++){
		resb = B[j] - aveb;
		resbb = resb*resb;
		resbbb = resbbb + resbb;
	}
	varb = resbbb/(jmlnoprim-1);
	sdb = sqrt(varb);
	cout<<endl<<sdb;
}
