#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	cout <<"====================================================================";
	cout <<"\nNAMA	: MUHAMMAD ALDO EFFENDY";
	cout <<"\nKELAS	: TI.18.E1";
	cout <<"\n====================================================================";
	cout <<"\n\nPROGRAM MENCARI BILANGAN TERBESAR" <<endl;
	int bil1, bil2, bil3, terbesar;
	cout <<"Masukan bilangan pertama : ";
	cin>>bil1;
	cout <<"Masukan bilangan kedua : ";
	cin>>bil2;
	cout <<"Masukan bilangan ketiga : ";
	cin>>bil3;

	if(bil1 > bil2)
		terbesar = bil1;
	else
		terbesar = bil2;
	if(bil3 > terbesar)
		terbesar = bil3;
	cout<<"Bilangan terbesar = "<<terbesar;
	cout<<"\n\nTERIMA KASIH :)";
	getch();
}
