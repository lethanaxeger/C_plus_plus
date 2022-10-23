#include <iostream.h>
#include <stdio.h>
#include <string>
#include <conio.h>

using namespace std;
double e, e1, e2, ne, ne1;

// proses seleksi
seleksi(double avge, double avgne){
if (avge < avgne) {
cout << "Student : Jadi, gimana bu?" << endl << "Lecture : Dengan nilai Eksakta " << avge << " dan nilai Non-Eksakta " << avgne << ", Maka kamu masuk jurusan IPS";}
else if (avge > avgne) {
cout << "Student : Jadi, gimana bu?" << endl << "Lecture : Dengan nilai Eksakta " << avge << " dan nilai Non-Eksakta " << avgne << ", Maka kamu masuk jurusan IPA";}
else if (avge == avgne) {
cout << "Student : Jadi, gimana bu?" << endl << "Lecture : Dengan nilai Eksakta " << avge << " dan nilai Non-Eksakta " << avgne << ", Maka kamu pilih masuk jurusan IPA atau IPS. Istikoroh ya nak biar diberikan pilihan yang benar :)";}
}

double main(){
cout << "!-!-! Pemilihan Jurusan IPA dan IPS !-!-!\n";

//Input Section
cout << "\n Sesi Nilai Eksakta \n\nMasukkan Nilai Eksakta 1 = ";
cin >> e;
cout << "Masukkan Nilai Eksakta 2 = ";
cin >> e1;
cout << "Masukkan Nilai Eksakta 3 = ";
cin >> e2;
cout << endl << "=-=-=-=-=-=-=-=\n";

cout << "\n Sesi Nilai Non Eksakta \n\nMasukkan Nilai Non Eksakta 1 = ";
cin >> ne;
cout << "Masukkan Nilai Non Eksakta 2 = ";
cin >> ne1;
cout << endl << "=-=-=-=-=-=-=-=\n\n";

//Rata-rata Nilai Eksakta
double avge = (e + e1 + e2)/3;

//Rata-rata Nilai Non Eksakta
double avgne = (ne + ne1)/2;

//Input ke Function Seleksi
seleksi(avge, avgne);
getch();
}