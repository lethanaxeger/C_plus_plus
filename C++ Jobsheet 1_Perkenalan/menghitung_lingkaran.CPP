#include <iostream.h>
#include <stdio.h>
#include <string>
#include <conio.h>

using namespace std;

double pi = 3.14;
double r, lk, kl;
string bolean, gimana;

// Sesi Luas Lingkaran
luas(double r) {
 lk = pi * r * r;
 cout << "===\nHASIL" << endl << "Luas Lingkaran adalah = " << lk << endl;
 return lk;
}

// Sesi Keliling Lingkaran
keliling (double r) {
kl = 2 * pi * r;
cout << "===\nHASIL" << endl << "Keliling Lingkaran adalah = " << kl;
return kl;
}

int main(){
//introduction
cout << "Selamat datang di program menghitung Lingkaran... Bulat dan Solid!" << endl << "===============================================" << endl << "Silahkan masukkan angka yang anda inginkan" << endl << "Disini, pi = 3,14 ya" << endl;

//if else maybe ehe
cout << "Silahkan pilih anda ingin menghitung apa? (Luas/Keliling) \n" << endl;
cout << ">> "; cin >> bolean;

if (bolean == "Luas" || bolean == "luas") {
cout << endl << endl << "LUAS LINGKARAN\n" << "=======================" << endl << "Rumus yang digunakan adalah LO = Pi * r * r " << endl << "==" << endl << "Masukkan jari-jari lingkaran = ";
cin >> r;
luas(r);
} else if(bolean == "Keliling" || bolean == "keliling") {
cout << endl << endl << "KELILING LINGKARAN\n" << "=======================" << endl << "Rumus yang digunakan adalah KO = 2 * Pi * r " << endl << "==" << endl << "Masukkan jari-jari lingkaran = ";
cin >> r;
keliling(r);
}

getch();

return 0;
}
