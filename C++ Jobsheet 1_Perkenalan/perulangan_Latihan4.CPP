#include <iostream.h>
#include <conio.h>

int x=1, y, z, n, o, input;

main(){

	cout << "Masukkan input anda : ";
   cin >> input;

   do {
      /* rumit bang *sad*
   	 if(x % 2 == 0){
			cout << "Yes" << endl;
      }
      else{
      	cout << x << endl;
      }
      x++; */

      cout << x << "Yes";
      x = x+2;
   }
   while(x <= 8);
   getch();
}
