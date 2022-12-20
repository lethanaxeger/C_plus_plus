#include <iostream.h>
#include <conio.h>

int i,j,n;

main(){

	cin >> n;

	for(i = n; i>=1; i--){
   	for(j = 1; j<=n; j++){
			if(i == j || i < j){
      		cout << "* ";
         }
         else{
         	cout << "  ";
         }
      }
      cout << endl;
   }
   getch();
}