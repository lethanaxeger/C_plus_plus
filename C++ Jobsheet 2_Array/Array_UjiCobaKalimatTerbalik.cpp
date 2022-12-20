#include <iostream>
#include <cstring>

using namespace std;

char line[150];
int i, f, g;

main(){
	
	cout << "By Fadlillah Bashir Al Hakim/2231130098/D3TT1C" << endl;
	cout << "\n========================================================\n	Reverse Program (For Text only)\n========================================================";
	cout << "\nYour Text/Name/Sentences : "; cin.getline(line, sizeof(line));
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
	
	cout << "Reverse result = ";
	
	int f = strlen(line);
	for(i = f-1; i >= 0; i--){
		cout << line[i];	
	}
	
}
