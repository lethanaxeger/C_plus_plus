#include <iostream>

using namespace std;

int matriks_a[3][2];
int matriks_b[3][2];
int matriks_hasil[3][2];
int i, j;

int main (){
	
	cout << "By Fadlillah Bashir Al Hakim/2231130098/D3TT1C" << endl;
	cout << "========================================================\n	Penggabungan Dua Matriks \n========================================================" << endl;

    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
        cout << "Masukkan Nilai Matriks = ";
        cin >> matriks_a[i][j];
        cout << endl;
		}
	}
	
    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
        cout << "Masukkam Nilai Matriks = ";
        cin >> matriks_b[i][j];
        cout << endl;
		}
	}
	
    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
      	matriks_hasil [i][j] = matriks_a[i][j] + matriks_b[i][j];

      	cout << "\nMatriks Hasil Penjumlahan adalah = \n";
      	}
	}
		  
    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
            cout << matriks_hasil[i][j];
            cout << "\n";
        }
    }
}

