//Menampilkan Hasil Sebagai Berikut
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j;
	
	cout<<"=========================================="<<endl;
	cout<<"          Tabel Progam Perkalian          "<<endl;
	cout<<"=========================================="<<endl;
	cout<<"\n";
	
	for (i=1; i<=10; i++)
	{
		for (j=1; j<=10; j++)
		{
			cout<<" "<<i*j<<"\t ";
		}
		cout<<"\n";
	}
	
	getch();
	
}
