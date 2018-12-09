#include <iostream>

using namespace std;

int main(){
	
	int tahun;
	
	cout<<"PROGRAM MENGETAHUI TAHUN KABISAT" <<endl;
	cout<<"====================================";
	
	cout <<"\nINI TAHUN KABISAT, JIKA..... : \n"<<endl;
	cout <<" * Tahun habis jika dibagi 4 "<<endl;
	cout <<" * bukan tahun yang habis dibagi 100" <<endl;
	cout <<" * tahun tidak habis dibagi 400" <<endl;
	cout <<" * kecuali habis dibagi 100 & habis dibagi 400" <<endl;
		
		cout<<"\nMASUKAN TAHUN =  "<<endl;
		cin >>tahun;
		
		if (tahun %4 ==0)
		cout<<tahun<< " " <<"adalah tahun kabisat" << endl;
		else
		cout<<tahun<< " " <<"adalah bukan tahun kabisat" << endl;
		system("pause");
	
		cin.get();
		return 0;
}
