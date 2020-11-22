#include <iostream>
using namespace std;

int main()
{
	int umur1,umur2,umur3,umur4;
	int bantuan1,bantuan2,bantuan3,bantuan4;
	int bantuan_total;

	cout << "Umur Ayah	= " ; cin >> umur1 ;
	cout << "Umur Ibu 	= " ; cin >> umur2 ;
	cout << "Umur Anak 1	= " ; cin >> umur3 ;
	cout << "Umur Anak 2 	= " ; cin >> umur4 ;


	if (umur1 <= 12){
		bantuan1 = 15000;
	}	else if (umur1 > 12 && umur1 <= 20){
		bantuan1 = 20000;
	}	else if (umur1 > 20){
		bantuan1 = 30000;
	}
	if (umur2 <= 12){
		bantuan2 = 15000;
	}	else if (umur2 > 12 && umur2 <= 20){
		bantuan2 = 20000;
	}	else if (umur2 > 20){
		bantuan2 = 30000;
	}
	if (umur3 <= 12){
		bantuan3 = 15000;
	}	else if (umur3 > 12 && umur3 <= 20){
		bantuan3 = 20000;
	}	else if (umur3 > 20){
		bantuan3 = 30000;
	}
	if (umur4 <= 12){
		bantuan4 = 15000;
	}	else if (umur4 > 12 && umur4 <= 20){
		bantuan4 = 20000;
	}	else if (umur4 > 20){
		bantuan4 = 30000;
	}

	bantuan_total = 30 * (bantuan1 + bantuan2 + bantuan3 + bantuan4);

	cout << "Tagihan satu bulan adalah Rp. " << bantuan_total << endl;


	cin.get();
	cin.get();
	return 0;
}
