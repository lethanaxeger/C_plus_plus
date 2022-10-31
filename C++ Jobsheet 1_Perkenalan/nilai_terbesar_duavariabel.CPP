#include <iostream.h>
#include <stdio.h>
#include <string>
#include <conio.h>

using namespace std;

double a,b;

main(){
	//header
	cout << " !_!_! Biggest Number Program !_!_!\n\n";

	//input
	cout << "Lebokno Nilai A Coy : "; cin >> a;
	cout << "Lebokno Nilai B Coy : "; cin >> b;

   cout << "\n\n=-=-=-=-=-=-=\n";

	//seleksi
   if (a > b) {
   	cout << "\nNilai terbesar adalah : " << a;
   } else if (b > a){
   	cout << "\nNilai terbesar adalah : " << b;
   }

	getch();
}
