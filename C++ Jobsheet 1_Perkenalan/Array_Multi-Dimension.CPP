#include <iostream.h>
#include <conio.h>

int x, i;

main(){

	int jimmy [3][5];

   for (x=0; x<3; x++){
   	for (i=0; i<5; i++){
   	cout << "Masukkan nilai ke-" << x+1 <<" = ";
      cin >> jimmy[x][i];
      }
   }
   for (i = 0; i <= 4; i++){
   	cout << "Nilai ke-" << i+1 << " = " << jimmy[i] << endl;
   }
   getch();
}
