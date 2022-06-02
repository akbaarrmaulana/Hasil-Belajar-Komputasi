#include <iostream>
using namespace std;
main()
{
	const double phi = 3.14; //memberi nama konstanta
//	string = kata
//	const = konstanta (tipe_data nama_konstanta = nilai tetapan) 
//	define = konstanta (nama_konstanta nilai_tetapan)
//	char = huruf
//	int = angka bulat
//	double dan float = desimal

// operator binary - melibatakan 2 operan (contoh +,-,*,) (operator aritmatika, logika, relasional, dll)
// operator aritmatika (+,-,/,*,%(modulus))
// operator logika = true and false (OR(||), AND(&&), NOT(negasi -> !))
// operator relasi (>,<,>=,<=,==,!=)
// operator assignment (contoh =)


/*   
Statement Input & Output
harus menggunakan file header iostream
#include <iostream>

statement input 
cin >> variabel
ketika menggunakan statement input pasti memerlukan variabel, dan variabel perlu di deklarasikan

Statement Outpot
cout<<ekspresi
statement output tidak harus menggunakan variabel
kalau outputnya adalah suatu variabel yang dipanggil maka tidak usah "", kalau yang dipanggil adalah bukan variabel maka menggunakan ""


	
*/

//	Deklarasi variabel (tipe_data_variabel nama_variabel;)
	int p, l, L;
//	Inisialisasi variabel (tipe_data_variabel nama_variabel = nilai_awal;)
	

	cout<<"Bismillahirrahmanirrahim\n\n";
	cout<<"Program Luas Persegi Panjang\n";
	cout<<"Panjang : ";
	cin>>p;
	cout<<"lebar : ";
	cin>>l;
	
		L = p*l;
	cout<<"Luas Persegi Panjang Anda : "<<L;
}
