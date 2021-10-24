/* Program Gaji Karyawan Mingguan */

#include <iostream>
#include <conio.h>

using namespace std;

main ()
{
	char nama [20], gol;
	int jam, mylembur=0;
	long gaji, lembur;

	cout<<"			PT. MAKMUR	\n\n"<<endl;
	cout<<"================================================================"<<endl;
	cout<<" Masukkan Nama Karyawan : ";cin>>nama;
	cout<<" Masukkan Golongan [A/B/C/D] : ";cin>>gol;
	cout<<" Masukkan Jumlah Jam Kerja : ";cin>>jam;
	lembur = 4000;

	if (jam>48){
		mylembur=jam+48;
	}
	switch (gol)
	{
		case 'A' :
			gaji = (jam+mylembur) * 5000;
			break;
		case 'B' :
			gaji = (jam+mylembur) * 7000;
			break;
		case 'C' : 
			gaji = (jam+mylembur) * 8000;
			break;
		case 'D' :
			gaji = (jam+mylembur) * 10000;
			break;
			default :
				printf("Golongan tidak terdaftar\n\n");
				gaji = 0;
				lembur = 0;
	}
	
	if (jam>48)
	{
		gaji = gaji+((jam-48)*lembur);
	}
cout<<"NAMA KARYAWAN : "<<nama<<endl;
cout<<"TOTAL GAJI : "<<gaji<<endl;

getch ();
return 0;	
}
