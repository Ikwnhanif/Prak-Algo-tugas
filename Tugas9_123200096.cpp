#include <iostream>
using namespace std;

int main()
{
	int a;
	int maxim = -100000;
	int minim = 100000;
	int selisihfix = 0;
	double total = 0;
	int selisih;
	cout << "Masukkan banyak angka : "; cin >> a;
	int array[a];

	for (int i = 0 ; i < a ; i++){
		cout << "Angka ke-" << i+1 << " : "; cin >> array[i];
	}
	cout << endl << endl;

	cout << "______Hasil______" << endl;

	//deret
	cout << "deret\t\t: ";
	for (int i = 0 ; i < a ; i++){
		cout << array[i] << " ";
	}
	cout << endl;

	//max min
	for (int i = 0; i < a; i++){
		if(array[i] < minim)
			minim = array[i];
		if(array[i] > maxim)
			maxim = array[i];
	}
	cout << "Maksimum\t: " << maxim << endl;
	cout << "Minimal\t\t: " << minim << endl;

	//rerata
	for (int i = 0; i < a; i++){
		total += array[i];
	}
	cout << "Rata-rata\t: " << total/a << endl;

	//selisih terbesar
	for ( int i= 0; i < a; i++){
		selisih = array[i] - array[i+1];
		if (i == a - 1)
			selisih = array[i-1] -array[i];
		if (selisih < 0)
			selisih*=-1;
		if(selisih >= selisihfix)
			selisihfix = selisih;
	}
	cout << "Selisih max\t: " << selisihfix << endl;

	system("pause");
	return 0;
}
