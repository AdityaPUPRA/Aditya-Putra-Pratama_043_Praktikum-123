//Progam Menghitung Jumlah 6 Suku Pertama dari barisan 
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	int i,a,b,c,n,hasil,hasil_1,hasil_2,hasil_3,pangkat,y; 
	
	cout<<"================================================="<<endl;
	cout<<"   Menghitung Jumlah Suku Pertama Dari Barisan   "<<endl;
	cout<<"================================================="<<endl;
	cout<<"\n";
	
	cout<<" Masukkan Suku Pertama = "; cin>>a;
	cout<<" Masukkan Pangkat Suku = "; cin>>pangkat;
	cout<<" Masukkan Beda         = "; cin>>b;
	cout<<" Mencari Suku ke n     = "; cin>>n;
	cout<<"-------------------------------------------------"<<endl;
	cout<<" Barisan Bilangan "<<n<<" = ";
	y+=a+b;
	cout<<y<<","<<i<<" ";
	
	for (i=0;i<n-1;i++)
	{
		hasil_1=n-1;
		hasil_2=hasil_1*b;
		hasil_3=hasil_2+a;
		cout<<c<<",";
	}
	hasil=pow(hasil_3,pangkat);
	cout<<" Jumlah Suku dari Barisan ke-"<<n<<" = "<<hasil<<endl;
	
	getch();
	
 }
