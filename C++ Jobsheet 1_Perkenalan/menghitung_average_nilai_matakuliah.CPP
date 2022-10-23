#include <iostream.h>
#include <stdio.h>
#include <string>
#include <conio.h>

using namespace std;
double rata, nilai, mt1, mt2;

// proses seleksi
seleksi(double nilai){
if (nilai < 60) {
cout << "Student : Duh, nilaiku ngedrop nih bu. Mohon sayangi saya bu..." << endl << "Lecture : Ngapain di sayangi, lha nilaimu aja lho " << nilai << ", kecewa saya :(";}
else if (nilai >= 60) {
cout << "Lecturer : Selamat nak anda lulus dengan nilai " << nilai;}
else if (nilai >= 90) {
cout << "Lecturer : Wih, selamat nak anda lulus dengan nilai " << nilai << ", Saya ikutkan Olimpiade ya :D";}
}

//proses perhitungan rata-rata
ratarata(double tn){
double nilai = tn / 2;
seleksi(nilai);
return nilai;
}

double main(){
cout << "!-!-! Average Score Calculator !-!-!\n";

//Input Section
cout << "\nMasukkan Nilai Mata Kuliah ke-1 = ";
cin >> mt1;
cout << "Masukkan Nilai Mata Kuliah ke-2 = ";
cin >> mt2;
cout << endl << "=-=-=-=-=-=-=-=\n\n";

//Total nilai
double tn = mt1 + mt2;

//Input ke Function ratarata
ratarata(tn);
getch();
}
