#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>

using namespace std;

int dewasa, anak, bayi, bagasi;
int bbagasi = 20;

count_harga(int dewasa, int anak, int bayi, int bagasi, int tfreebagasi){
//proses perhitungan harga
int hdewasa = dewasa * 500000;
int hanak = anak * 250000;
int hbayi = bayi * 125000;

//bagasi
if(bagasi > tfreebagasi){
 int berat_tambahan = bagasi - tfreebagasi;
 int hbagasi = berat_tambahan * 10000;

 //Total Harga
 int total_harga = hdewasa + hanak + hbayi + hbagasi;
 cout << "!-!-! Informasi Penumpang !-!-!\n Penumpang Dewasa : " << dewasa << " Orang,\n Penumpang Anak-anak : " << anak << " Orang,\n Penumpang Bayi : " << bayi << " Orang,\n Dengan berat barang bawaan sebesar : " << bagasi << " Kg.\n Karena berat melebihi aturan (20Kg / Dewasa), maka anda terkena biaya tambahan sebesar Rp." << hbagasi << "\n\nTotal biaya = Rp." << total_harga;
}
else{
 int total_harga = hdewasa + hanak + hbayi;
 cout << "=!-!-! Informasi Penumpang !-!-!\n Penumpang Dewasa : " << dewasa << " Orang,\n Penumpang Anak-anak : " << anak << " Orang,\n Penumpang Bayi : " << bayi << " Orang,\n Dengan berat barang bawaan sebesar : " << bagasi << " Kg.\n\nTotal biaya = Rp." << total_harga;
}

return 0;
}

main(){
//header
cout << "=-= Program Check-In POLINEMA Airport =-= \n\n -> List Harga Tiket Pesawat pada setiap kategori <-\n    1. Dewasa 	 = Rp.500.000 / Orang\n    2. Anak-anak = Rp.250.000 / Anak\n    3. Bayi 	 = Rp.125.000 / Bayi\n\n=-=-=-=-=-=-=\n\n";

//input section
cout << "!!! Masukkan data penumpang !!!\n";
cout << "\n Dewasa : ";
cin >> dewasa;
cout << " Anak-anak : ";
cin >> anak;
cout << " Bayi : ";
cin >> bayi;
cout << "\n Berat barang bawaan : ";
cin >> bagasi;
cout << "\n =-=-=-=-=-=-=-=-=-=-=-=-= \n\n\n";

//free bagasi
int tfreebagasi =  dewasa * bbagasi;


//function input
count_harga(dewasa, anak, bayi, bagasi, tfreebagasi);

getch();
}