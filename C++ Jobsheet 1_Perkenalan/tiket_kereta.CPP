#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>

using namespace std;

int dewasa, anak, bayi;

count_harga(int dewasa, int anak, int bayi){
	//proses perhitungan harga
	int hdewasa = dewasa * 100000;
	int hanak = anak * 50000;

	//total harga
	int harga_total = hdewasa + hanak;

	if(harga_total > 500000){
   	int harga_potongan = harga_total - 50000;
      cout << "!-!-! Informasi Penumpang !-!-!\n Penumpang Dewasa : " << dewasa << " Orang,\n Penumpang Anak-anak : " << anak << " Orang,\n Penumpang Bayi : " << bayi << " Orang,\n Karena Total pengeluaran anda melebihi Rp500.000, maka anda terkena potongan biaya sebesar Rp.50.000\n\nTotal biaya = Rp." << harga_potongan;
	}else{
   	cout << "!-!-! Informasi Penumpang !-!-!\n Penumpang Dewasa : " << dewasa << " Orang,\n Penumpang Anak-anak : " << anak << " Orang,\n Penumpang Bayi : " << bayi << " \n\nTotal biaya = Rp." << harga_total;
	}


	return 0;
}

main(){
//header
cout << "=-= Program Check-In POLINEMA Train Station =-= \n\n -> List Harga Tiket Kereta pada setiap kategori <-\n    1. Dewasa 	 = Rp.100.000 / Orang\n    2. Anak-anak = Rp.50.000 / Anak\n    3. Bayi 	 = Free\n\n=-=-=-=-=-=-=\n\n";

//input section
cout << "!!! Masukkan data penumpang !!!\n";
cout << "\n Dewasa : ";
cin >> dewasa;
cout << " Anak-anak : ";
cin >> anak;
cout << " Bayi : ";
cin >> bayi;
cout << "\n =-=-=-=-=-=-=-=-=-=-=-=-= \n\n\n";

//function input
count_harga(dewasa, anak, bayi);

getch();
}