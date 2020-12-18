#include <iostream>
using namespace std;
float phi=3.14;
double Luas(double r);
double Keliling(double r);
double Volume(double r, double t);
int main()
{
	char repeat;
	int pilih;
	double r,t;
	do{
		cout << "Hitung Lingkaran ==========\n";
		cout << "1. Luas Lingkaran\n";
		cout << "2. Keliling Lingkaran\n";
		cout << "3. Volume Tabung\n";
		cout << "Pilih: "; cin >> pilih;
		switch(pilih){
			case 1 :
				cout << "Jari - Jari	: "; cin >> r;
				cout << "Luas Lingkaran adalah " << Luas(r) << endl; 
			break;
			case 2 :
				cout << "Jari - Jari	: "; cin >> r; 
				cout << "Keliling Lingkaran adalah " << Keliling(r) << endl; 
			break;
			case 3 :
				cout << "Jari - Jari	: "; cin >> r; 
				cout << "Tinggi		: "; cin >> t;
				cout << "Volume Tabung adalah " << Volume(r,t) << endl; 
			break;
			default :
				cout << "Input Salah :( \n"; 
		}

		cout << "Ulangi program?(y/n) "; cin >> repeat;
		cout << endl;
	}while (repeat=='y');

	cout << "Program selesai, Terima Kasih :)\n";
	system("pause");
	return 0;
}

double Luas(double r){ 
	return phi*r*r;
}

double Keliling(double r){
	return phi*2*r;
}

double Volume(double r, double t){ 
	return phi*r*r*t;
}