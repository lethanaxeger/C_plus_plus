#include <iostream.h>
#include <conio.h>

int x, y, z, n, o, input;

main(){

	cout << "Masukkan input anda : ";
   cin >> input;

   for(x = 1; x <= 6; x++){
   	if(x <= 3){
			cout << "Yes" << endl;
      }
      else{
      	cout << x << endl;
      }
   }                       
   getch();
}