#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>

char nama[40];
char kelas[2];
int absen;
float ipk;

using namespace std;

main() {

//Input Section
	cout << "=================================================================================" << endl <<
   "Selamat datang di Setor Mahasiswa POLINEMA. Silahkan masukkan data anda" << endl;
	cout << "Nama = ";
   gets(nama);
   cout << "Kelas = ";
   cin >> kelas;
   cout << "Absen = ";
   cin >> absen;
   cout << "IPK = ";
   cin >> ipk;
   cout << "=================================================================================" << endl;

//Output Section
   cout << "================================================================================="<< endl <<
   "Selamat, data anda sudah masuk ke database kami. Berikut data yang anda masukkan tadi." << endl <<
   "Nama = " << nama << endl <<
   "Kelas = " << kelas << endl <<
   "Absen = " << absen << endl << "IPK = " << ipk << endl <<
   "=================================================================================";

getch();
}