//Progam Menghitung Jumlah Deret 3,7,11,15,...
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	
	int a,b,c,n,jumlah;
	
	cout<<"============================================"<<endl;
	cout<<"|         Menghitung Jumlah Deret          |"<<endl;
	cout<<"============================================"<<endl;
	cout<<"\n";
	cout<<"| Masukkan Bilangan Pertama = "; cin>>a;
	cout<<"| Masukkan Bilangan Beda    = "; cin>>b;
	cout<<"| Masukkan Deret n          = "; cin>>n;
	cout<<"============================================"<<endl;
	cout<<" Deret ke-"<<n<<" = "; 
	cout<<a<<",";
	
	for (int i=0;i<n-1;i++)
	{
		c=a+b;
		a=c;
		cout<<c<<",";
		jumlah=jumlah+c;
	}
	
	cout<<" Jumlah dari Deret ke-"<<n<<" = "<<jumlah<<endl;
	cout<<"=============================================="<<endl;
	
	getch();
	
}
