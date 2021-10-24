#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a,i,j;
	
	cout<<"=================================================="<<endl;
	cout<<"|               Tampilan Gambar                  |"<<endl;
	cout<<"=================================================="<<endl;
	cout<<"\n";
	cout<<" Masukkan Segitiga Angka : "; cin>>a;
	
	for (i=1; i<=a; i++)
	{
		for (j=1; j<=i; j++)
		{
			cout<<""<<j;
		}	
		cout<<" \n";
	}
	for (i=a-1; i>=1; i--)
	{
		for (j=1; j<=i; j++)
		{
			cout<<""<<j;	
		}
		cout<<" \n";
	}
}
