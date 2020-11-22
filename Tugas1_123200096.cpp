#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int NIM,UTS,UAS;
	float ratarata;
	
	string nama;
	
	cout << "Nama 	:";
	cin  >> nama ;
	cout << "NIM	:";
	cin  >> NIM ;
	cout << "UTS 	:";
	cin  >> UTS ;
	cout << "UAS 	:";
	cin  >> UAS ;

	ratarata=(UTS+UAS)/2 ;
	cout << "Hai, nama saya " << nama << " nim " << NIM << endl;
	cout << ", Nilai akhir saya " << ratarata << endl;

	cin.get();
	cin.get();
	return 0;
}