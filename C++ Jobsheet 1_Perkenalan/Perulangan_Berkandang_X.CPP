#include <iostream.h>
#include <conio.h>

int i,j,n;

main(){

	cin >> n;

	for(i = 1; i<=n; i++){
   	for(j = 1; j<=n; j++){
			if(i == j || i+j == n+1){
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