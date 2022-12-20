#include <iostream.h>
#include <conio.h>

int x, y, z, n;

main(){

	cout << "masukkan n = ";
   cin >> n;

   x = 1;
   while (x <= 5){
   cout << "HELLO WORLD PAKAI WHILE" << endl;
   x++;
   }

   for (y = 1; y <= 5; y++){
   cout << "HELLO WORLD PAKAI FOR" << endl;
   y++;
   }

   z = 6;
   do {
   	cout << "HELLO WORLD PAKAI DO WHILE" << endl;
      z++;
   }
   while(z <= 5);

   getch();
}
