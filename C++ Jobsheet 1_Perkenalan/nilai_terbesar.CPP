#include <iostream.h>
#include <stdio.h>
#include <string>
#include <conio.h>

using namespace std;

double a,b,c;

main(){
	//header
	cout << " !_!_! Biggest Number Program !_!_!\n\n";

	//input
	cout << "Lebokno Nilai A Coy : "; cin >> a;
	cout << "Lebokno Nilai B Coy : "; cin >> b;
	cout << "Lebokno Nilai C Coy : "; cin >> c;

   cout << "\n\n=-=-=-=-=-=-=\n";

	//seleksi
   if (a > b && a > c) {
   	cout << "\nNilai terbesar adalah : " << a;
   } else if (b > a && b > c){
   	cout << "\nNilai terbesar adalah : " << b;
   } else if (c > a && c > b){
    	cout << "\nNilai terbesar adalah : " << c;
   }

	getch();
}
