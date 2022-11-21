#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

char x;
float c, k, f, r;

main(){
	cout << "!_!_! Konversi Suhu !_!_!\n\n";

   cout << "K = Konversi ke Kelvin \nF = Konversi ke Fahrenheit \nR = Konversion ke Reamur \n\n";
   cout << "Pilih salah satu dari ketiga list tersebut : ";
	cin >> x;
	switch(x){
 		case 'k' :
      	cout << "Masukkan suhu dalam satuan Celcius = ";
      	cin >> c;
         k = c + 273,15;
         cout << "Konversi Celcius ke Kelvin = " << k << " Kelvin";
         break;
   	case 'f' :
      	cout << "Masukkan suhu dalam satuan Celcius = ";
      	cin >> c;
         f = (c * 9/5) + 32;
         cout << "Konversi Celcius ke Fahrenheit = " << f << " Fahrenheit";
         break;
   	case 'r' :
      	cout << "Masukkan suhu dalam satuan Celcius = ";
      	cin >> c;
         r = 4/5 * c;
         cout << "Konversi Celcius ke Reamur = " << r << " Reamur";
         break;
      default :
      	cout << "Halo bre, sepertinya ente masukin list yang tidak termasuk di sistem. silahkan coba lagi.";
         break;
	}
	getch();
}