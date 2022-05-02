#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a,n,data[3];
	char ulang;
	
	cout<<"=======   Tugas Liburan Prokom :)   =======\n";
	
	do{
	cout<<"\n============================================\n";
	cout<<"        Pilih Nomor Soal (1-4) : ";cin>>a;
	cout<<"============================================\n\n";
	
	switch(a){
		case 1:
			int menu;
			char ulang2;

			cout<<"<<<<   1.Program Statistika Deskriptif   >>>>\n";
			
			do{
			cout<<"\nMenu :\n";
			cout<<"1. Jumlah\n";
			cout<<"2. Rata-rata\n";
			cout<<"3. Varians\n";
			cout<<"4. Standar Deviasi\n";
			
			cout<<"\n============================================\n\n";
			cout<<"Apa yang Ingin Anda Ketahui : ";cin>>menu;
			
			switch(menu){
				case 1:
				    float sum;
				    
					cout<<"\n====>=>   1.Jumlah   <=<====\n\n";
				    cout<<"Banyaknya Data = ";cin>>n;
				    cout<<endl;
				    
				    for (int i=1; i<=n; i++){
				           cout<<"Data ke-"<<i<<" = ";
				           cin>>data[i];
				           sum = sum + data[i];
				        }
				    cout<<"\nJumlah = "<<sum<<endl;
				break;
				
				case 2:
					int n, data[3];
				    float avr;
				    
				    cout<<"\n====>=>   2.Rata-rata   <=<====\n\n";
				    cout<<"Banyaknya Data = ";cin>>n;
				    cout<<endl;
				    
				    for (int i=1; i<=n; i++){
				           cout<<"Data ke-"<<i<<" = ";
				           cin>>data[i];
				           sum = sum + data[i];
				        }
				        
				    avr = sum/n;
				    cout<<"\nRata-rata = "<<avr<<endl;
				break;
				
				case 3:
				    float var,a,b,c;
				    
				    cout<<"\n====>=>   3.Varians   <=<====\n\n";
				    cout<<"Banyaknya Data = ";
				    cin>>n;
				    cout<<endl;
				    
				    for (int i=1; i<=n; i++){
				           cout<<"Data ke-"<<i<<" = ";
				           cin>>data[i];
				           sum = sum + data[i];
				        }
				        
				    avr=sum/n;
				    
				    for(int i=1; i<=n; i++){
				    	a=data[i]-avr;
				    	 c = a*a;
				    	 b = b+c;
					}    
				    var = b/(n-1);
				    
				    cout<<endl;
				   	cout<<"Varians = "<<var<<endl;
    
				break;
				
				case 4:
				    float sd;
				    
				    cout<<"\n====>=>   4.Standar Deviasi   <=<====\n\n";
				    cout<<"Banyaknya Data = ";
				    cin>>n;
				    cout<<endl;
				    
				    for (int i=1; i<=n; i++){
				           cout<<"Data ke-"<<i<<" = ";
				           cin>>data[i];
				           sum = sum + data[i];
				        }
				        
				    avr=sum/n;
				    
				    for(int i=1; i<=n; i++){
				    	a=data[i]-avr;
				    	 c = a*a;
				    	 b = b+c;
					}    
				    var = b/(n-1);
				    sd = sqrt(var);
				    
				    cout<<endl;
				   	cout<<"Standar Deviasi = "<<sd<<endl;
				break;
				
				default :
					cout<<"\n\nxxx   Maaf Anda Salah Input   xxx";
			}
			cout<<"\nUlangi Program Statistika Deskriptif?(y/t) : ";
			cin>>ulang2;
			}
			while(ulang2=='y');
				
		break;
		
		case 2:
			int jpp,jpa,jph,th,hpa,hpp,hph,status,dis,tp,t,p;
			char ktp,ulang3;
			
			cout<<"<<<<   2.Program Kasir Restaurant   >>>>\n";
			do{
			cout<<"\n=========   Katalog   =========\n";
			cout<<"Paket Panas		: Rp 50.000\n";
			cout<<"Paket Hemat		: Rp 40.000\n";
			cout<<"Paket Anak		: Rp 30.000\n";
			
			hpp = 50000;
			hph = 40000;
			hpa = 30000;
			
			cout<<"\nJumlah Paket Panas	: ";
			cin>>jpp;
			cout<<"Jumlah Paket Hemat	: ";
			cin>>jph;
			cout<<"Jumlah Paket Anak	: ";
			cin>>jpa;
			
			th = jpp*hpp + jph*hph + jpa*hpa;
			cout<<"\nTotal Harga	= Rp "<<th;
			
			cout<<"\n\nStatus\n";
			cout<<"1. Pelajar / Mahasiswa\n";
			cout<<"2. Bukan Pelajar / Mahasiswa\n";
			cout<<"Status Anda : ";
			cin>>status;
			
			switch(status){
				case 1 : 
				cout<<"Apakah Anda Memiliki Kartu Tanda Pelajar/Mahasiswa ? (y/t) = ";
				cin>>ktp;
		
				if(ktp=='y'){
					dis = 0.5*th;
				}else if(ktp=='t'){
					dis = 0*th;
				}else{
					cout<<"\nAnda Salah Input";
				}
				break;
				case 2:
					dis = 0*th;
				break;
				default:
					cout<<"\nAnda Salah Input";
			}
			
			cout<<"\nTotal Potongan Harga	= Rp "<<dis;
			t = th - dis + th*0.1;
			p = th*0.1;
			cout<<"\nPajak			= Rp "<<p;
			cout<<"\nTotal Pembayaran	= Rp "<<t;
			
			cout<<"\n\n============================================\n";
			
			cout<<"\nUlangi Program Kasir Restaurant?(y/t) : ";
			cin>>ulang3;
	}while(ulang3=='y');
		break;
		
		case 3:
			char ulang4;
			
			cout<<"<<<<   3.Program Deret Segitiga   >>>>\n";
			do{
			cout<<"\n============================================\n";
			cout<<"\nMasukkan jumlah deret segitiga yang diinginkan : ";
			cin>>n;
			
			for(int i=1;i<=n;i++){
				for(int j=1;j<=i;j++){
					cout<<j<<" ";
			}
				cout<<endl;
			}
			cout<<"\nUlangi Program Deret Segitiga?(y/t) : ";
			cin>>ulang4;
			}while(ulang4=='y');
			
		break;
		
		case 4:
			char x,ulang5;
		
			cout<<"<<<<   4.Program Gambar X  >>>>\n";

			do{
			cout<<"\n============================================\n";
			cout<<"\nn : ";cin>>n;
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
			}	cout<<"\nUlangi Program Gambar X?(y/t) : ";
			cin>>ulang5;
			}while(ulang5=='y');
			
		break;
		
		default :
		cout<<"\n\nxxx   Anda Salah Input Nomor Soal   xxx\n";	
	}
	cout<<"\n============================================\n";
	cout<<"Coba Soal Lain?(y/t) : ";
	cin>>ulang;
	}
	while(ulang=='y');
	
	cout<<"\n=========   Program Selesai   =========";
}
