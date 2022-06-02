#include <iostream>

using namespace std;

int main(){
	string NRP, nama;
	string mat2, fis2, prokom, tss, bindo, aed, agama;
	float IPS, nilai1, nilai2, nilai3, nilai4, nilai5, nilai6, nilai7;
	
	cout<<"====   Program Perhitungan IPS   ====\n\n";
	cout<<"Nama		: ";
	getline(cin, nama);
	cout<<"NRP		: ";
	cin>>NRP;
	
	cout<<"\n\nMasukkan Nilai huruf !!\n\n";
	cout<<"Nilai Matematika II	: ";
	cin>>mat2;
	
	if(mat2=="A"){
		nilai1 = 4;
	}else if(mat2=="AB"){
		nilai1 = 3.5;
	}else if(mat2=="B"){
		nilai1 = 3;
	}else if(mat2=="BC"){
		nilai1 = 2.5;
	}else if(mat2=="C"){
		nilai1 = 2;
	}else if(mat2=="D"){
		nilai1 = 1;
	}else{
		nilai1 = 0;
	}
	
	cout<<"Nilai Fisika II		: ";
	cin>>fis2;
	
	if(fis2=="A"){
		nilai2 = 4;
	}else if(fis2=="AB"){
		nilai2 = 3.5;
	}else if(fis2=="B"){
		nilai2 = 3;
	}else if(fis2=="BC"){
		nilai2 = 2.5;
	}else if(fis2=="C"){
		nilai2 = 2;
	}else if(fis2=="D"){
		nilai2 = 1;
	}else{
		nilai2 = 0;
	}
	
	cout<<"Nilai Prokom		: ";
	cin>>prokom;
	
	if(prokom=="A"){
		nilai3 = 4;
	}else if(prokom=="AB"){
		nilai3 = 3.5;
	}else if(prokom=="B"){
		nilai3 = 3;
	}else if(prokom=="BC"){
		nilai3 = 2.5;
	}else if(prokom=="C"){
		nilai3 = 2;
	}else if(prokom=="D"){
		nilai3 = 1;
	}else{
		nilai3 = 0;
	}
	
	cout<<"Nilai TSS		: ";
	cin>>tss;
	
	if(tss=="A"){
		nilai4 = 4;
	}else if(tss=="AB"){
		nilai4 = 3.5;
	}else if(tss=="B"){
		nilai4 = 3;
	}else if(tss=="BC"){
		nilai4 = 2.5;
	}else if(tss=="C"){
		nilai4 = 2;
	}else if(tss=="D"){
		nilai4 = 1;
	}else{
		nilai4 = 0;
	}
	
	cout<<"Nilai B.Indonesia	: ";
	cin>>bindo;
	
	if(bindo=="A"){
		nilai5 = 4;
	}else if(bindo=="AB"){
		nilai5 = 3.5;
	}else if(bindo=="B"){
		nilai5 = 3;
	}else if(bindo=="BC"){
		nilai5 = 2.5;
	}else if(bindo=="C"){
		nilai5 = 2;
	}else if(bindo=="D"){
		nilai5 = 1;
	}else{
		nilai5 = 0;
	}
	
	cout<<"Nilai AED		: ";
	cin>>aed;
	
	if(aed=="A"){
		nilai6 = 4;
	}else if(aed=="AB"){
		nilai6 = 3.5;
	}else if(aed=="B"){
		nilai6 = 3;
	}else if(aed=="BC"){
		nilai6 = 2.5;
	}else if(aed=="C"){
		nilai6 = 2;
	}else if(aed=="D"){
		nilai6 = 1;
	}else{
		nilai6 = 0;
	}
	
	cout<<"Nilai Agama Islam	: ";
	cin>>agama;
	
	if(agama=="A"){
		nilai7 = 4;
	}else if(agama=="AB"){
		nilai7 = 3.5;
	}else if(agama=="B"){
		nilai7 = 3;
	}else if(agama=="BC"){
		nilai7 = 2.5;
	}else if(agama=="C"){
		nilai7 = 2;
	}else if(agama=="D"){
		nilai7 = 1;
	}else{
		nilai7 = 0;
	}
	
	IPS = (nilai1+nilai2+nilai3+nilai4+nilai5+nilai6+nilai7) / (7);
	
	cout<<"\nIPS Anda adalah "<<IPS;
}
