#include <iostream>

using namespace std;

int matriks [3][2];
int i, j;

int main (){
	
  	cout << "By Fadlillah Bashir Al Hakim/2231130098/D3TT1C" << endl;
	cout << "========================================================\n	Array 2 Dimensi \n========================================================";
  	cout << "Masukkan Data Matriks\n";

    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
          cout << "Masukkan Nilai Matriks = ";
          cin >> matriks [i][j];
          cout << endl;
    	}
    }



    cout << "Matriks yang Telah Diinputkan adalah = \n";
    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
            cout << matriks [i][j];
            cout << "    ";
        	cout << "\n";
        }
    }
}
