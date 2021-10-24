/* Program Menu Segitiga Siku-Siku */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main ()
{
	int pil;
	float t, a, m, hasil;
	
	cout<<"MENU SEGITIGA SIKU-SIKU"<<endl;
	cout<<"======================="<<endl;
	cout<<"1. Hitung Panjang Sisi Miring"<<endl;
	cout<<"2. Hitung Luas"<<endl;
	cout<<"3. Hitung Keliling"<<endl;
	cout<<"4. Keluar Program"<<endl;
	
	cout<<"\nMasukkan Pilihan [1/2/3/4] :";cin>>pil;
	cout<<"Masukkan Alas : "; cin>>a;
	cout<<"Masukkan Tinggi : "; cin>>t;
	
	switch (pil)
	{
		case 1: 
			hasil = sqrt ((a*a)+(t*t));
			break;
		case 2 :
			hasil = (a*t)/2;
			break;
		case 3 :
			hasil = (sqrt ((a*a)+(t*t))+a+t);
			break;
		case 4 :
			cout<<"Keluar Program"<<endl;
			break;
			default : cout<<"PILIHAN TIDAK SESUAI"<<endl;
	}
	
	cout<<"Hasil Operasi : "<<hasil<<endl;
	
	getch ();
	return 0;
}
