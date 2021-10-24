/* Program Billing Warnet */
#include <iostream>
#include <conio.h>
#include <math.h>
#define money 5000

using namespace std;

int main (void)
{
	int j1, j2, t, h;
	
	cout<<"Masukkan Waktu Pertama = "; cin>> j1;
	cout<<"Masukkan Waktu Terakhir = "; cin>>j2;
	t=j2-j1;
	h= t*money;
	
	cout<<"Lama pemakaian = "<<t;
	cout<<"\n\nHarga yang harus dibayarkan = "<<h;
	
	getch ();
	return 0;
	
}
