#include<iostream>

using namespace std;

int main(){
	int day;
	
	cout<<"Hari ke ";
	cin>>day;
	
	switch(day){
		case 1:
			cout<<"Hari ke 1 adalah Ahad";
		break;
		case 2:
			cout<<"Hari ke 2 adalah Senin";
		break;
		case 3:
			cout<<"Hari ke 3 adalah Selasa";
		break;
		case 4:
			cout<<"Hari ke 4 adalah Rabu";
		break;
		case 5:
			cout<<"Hari ke 5 adalah Kamis";
		break;
		case 6:
			cout<<"Hari ke 6 adalah Jum'at'";
		break;
		case 7:
			cout<<"Hari ke 7 adalah Sabtu";
		break;
		default :
			cout<<"Anda salah input";
	}
}
