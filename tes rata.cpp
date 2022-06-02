#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;
int main()
  {
    int i, n, data[50];
    float rata,jum,var,sd,a,b,c;
    
    cout<<"Banyaknya Data = ";
    cin>>n;
    cout<<endl;
    
    for (i=1; i<=n; i++)
        {
           cout<<"Data ke-"<<i<<" = ";
           cin>>data[i];
           jum = jum + data[i];
        }
        
    rata=jum/n;
    
    for(i=1; i<=n; i++){
    	a=data[i]-rata;
    	 cout<<a<<endl;
    	 c = a*a;
    	 b = b+c;
	}    
    var = b/(n-1);
    sd = sqrt(var);
    
    cout<<endl;
   	cout<<"Varians = "<<var<<endl;
   	cout<<"Standar Deviasi = "<<sd<<endl;
    cout<<"Nilai Total = "<<jum<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
  getch();
  }
