#include <iostream>

using namespace std;

int main (){
  int x, y;
  int nilai [6];

  cout << "=-= PROGRAM ARRAY 1 DIMENSI =-=";
  cout << endl;
  cout << "Masukkan Data Array" << endl;

     for (x=1; x<=6; x++){
         cout << "Data ke- " << x << " = ";
         cin >> nilai [x];
     }

     cout << "Data Array yang Telah Dimasukkan" << endl;

     for (y=1; y<=6; y++){
     cout << "Data Ke- " << y << " = ";
     cout << nilai [y] << endl;
     }
}








