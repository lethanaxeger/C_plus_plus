#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

char x, j, h;
string nama, jurusan, prodi;

main(){
	cout << "!_!_! Data Diri Mahasiswa Polinema !_!_!\n\n\n";

   cout << "Silahkan masukkan Data diri anda untuk dimasukkan ke database SiAkad POLINEMA\n\n";

   cout << "Nama : ";
   cin >> nama;
   cout << "\nPilih jurusan anda :\n";
   cout << "	1.Teknik Elektro\n	2.Teknik Informatika\n	3.Teknik Mesin\n	4.Teknik Kimia\n	5.Teknik Sipil\n\n";
   cout << "Pilihan anda : ";
	cin >> x;
   switch(x){
 		case '1' :
         jurusan = "Teknik Elektro";
         break;
   	case '2' :
      	jurusan = "Teknik Informatika";
         break;
   	case '3' :
      	jurusan = "Teknik Mesin";
         break;
      case '4' :
      	jurusan = "Teknik Kimia";
         break;
      case '5' :
      	jurusan = "Teknik Sipil";
         break;
      default :
      	cout << "Halo bre, sepertinya ente masukin list yang tidak termasuk di sistem.";
			break;
	}
   switch(x){
   	case '1' :
      	cout << "\nPilih Prodi anda :\n";
         cout << "	1.Teknik Elektronika\n	2.Teknik Telekomunikasi\n	3.Teknik Listrik\n";
   		prodi = "Teknik Elektronika";
   		break;
   	case '2' :
         cout << "\nPilih Prodi anda :\n";
   		cout << "	1.Teknik Elektronika\n	2.Teknik Telekomunikasi\n	3.Teknik Listrik\n";
   		prodi = "Teknik Telekomunikasi";
   		break;
   	case '3' :
         cout << "\nPilih Prodi anda :\n";
   		cout << "	1.Teknik Elektronika\n	2.Teknik Telekomunikasi\n	3.Teknik Listrik\n";
   		prodi = "Teknik Listrik";
   		break;
   	default :
   		prodi = "Halo bre, sepertinya ente masukin list yang tidak termasuk di sistem.";
   		break;
   }
   switch(h){
   	case '1' :
      	cout << "test doang bre";
      default :
      	cout << "test default bre";
   }
	getch();
}
