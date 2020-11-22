#include <iostream>
using namespace std;

int main()
{
	string username;
	int pass;
	int pilihan;
	float hr,uts,uas;
	float nilai;
	cout << "========Login Akun========" << endl;
	cout << "Username 	: "; cin >> username;
	cout << "Password	: "; cin >> pass;
	cout << "==========================" << endl;

		
	if (username != "hanif" && pass != 123){
		cout << "Username dan Password anda salah ! " << endl;
	}else if (username !="hanif" && pass == 123){
		cout << "Username Anda Salah ! " << endl;
	}else if (username =="hanif" && pass != 123){
		cout << "Password Anda Salah ! " << endl;
	}else if (username == "hanif" && pass == 123){
		cout << "Login Berhasil !" << endl << endl;
		cout << "Input Nilai Mata Kuliah" << endl;
		cout << "1. Algoritma dan Pemrograman" << endl;
		cout << "2. Kalkulus" << endl;
		cout << "Masukkan Pilihan : "; cin >> pilihan;
		if (pilihan == 1){
			cout << "Nilai Harian 	: "; cin >> hr;
			cout << "Nilai UTS 	: "; cin >> uts;
			cout << "Nilai UAS 	: "; cin >> uas;
			nilai= (hr+uts+uas)/3;
			if (nilai >= 80){
				cout << "Selamat Anda Lulus Algoritma dan Pemrograman dengan Nilai " << nilai << endl;
			}else{
				cout << "Anda Tidak Lulus Algoritma dan Pemrograman dengan Nilai " << nilai << endl;
			}

		}else if (pilihan == 2){
			cout << "Nilai Harian 	: "; cin >> hr;
			cout << "Nilai UTS 	: "; cin >> uts;
			cout << "Nilai UAS 	: "; cin >> uas;
			nilai= (hr+uts+uas)/3;
			if (nilai >= 80){
				cout << "Selamat Anda Lulus Kalkulus dengan Nilai " << nilai << endl;
			}else{
				cout << "Anda Tidak Lulus Kalkulus dengan Nilai " << nilai << endl;
			}
		}else {
			cout << "Input yang anda masukkan salah ! " << endl;
		}
	}
	cin.get();
	cin.get();
	return 0;
}

