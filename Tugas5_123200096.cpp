#include <iostream>
using namespace std;

int main(){
	
	int a;
	cout <<"=====Gambar Bangun Datar=====" <<endl;
	cout <<"1. Kotak Bolong " <<endl;
	cout <<"2. Segitiga " << endl ;
	cout <<"Pilih	: "; cin >> a;
	switch(a){
		case 1 :
		int p, l;
			cout << "Masukkan Panjang = " ; cin >> p;
			cout << "Masukkan lebar = " ; cin >> l;
			for (int i=0; i<p; i++){
				for (int j=0; j<l; j++){
					if (i==0||i==p-1||j==0||j==l-1){
						cout << "* ";
					}else {
						cout << "  ";
					}
				}
				cout << endl;
			}

			break;
		case 2 :
		int b;
			cout << "Tinggi = " ; cin >> b;
		for(int i = 1; i <= b; i++){
			int m=1;
			int n=i;
			for(int j=1; j<=i; j++){
			cout << n << " ";
			n= n+(b-m);
			m++;
			}
			cout << endl;
		}
	}

	system ("pause");
	return 0;
}
