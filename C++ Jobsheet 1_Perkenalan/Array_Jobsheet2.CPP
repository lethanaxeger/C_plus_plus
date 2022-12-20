#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>

int i,j,k;
int vocal = 0;
int consonant = 0;
char line[100];

using namespace std;


int main(){


	cout << "================================\n	VOCAL & CONSONANT SCANNER	\n================================";
	cout << "\nMasukkan Kalimat/Teks/Nama = ";
   cin >> getLength(100, line);

   for(i = 0; i<100; i++){
   	if (line[i] == 'a' || line[i] == 'A' || line[i] == 'i' || line[i] == 'I' || line[i] == 'u' || line[i] == 'U' || line[i] == 'e' || line[i] == 'E' || line[i] == 'o' || line[i] == 'O'){
      	++vocal;
      }else if ((line[i] >= 'a' && line[i] <= 'z')||(line[i] >= 'A' && line[i] <= 'Z')){
       	++consonant;
      }
	}
   cout << "Huruf Vokalnya ada = " << vocal << endl << "Huruf Konsonannya ada = " << consonant << endl;

	getch();
   return 0;
}