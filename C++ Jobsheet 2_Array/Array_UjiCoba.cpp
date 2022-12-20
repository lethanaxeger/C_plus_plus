#include <iostream>

using namespace std;

char line[150];
int i, f, g;
int vocal = 0;
int consonant = 0;

main(){
	
	cout << "By Fadlillah Bashir Al Hakim/2231130098/D3TT1C" << endl;
	cout << "========================================================\n	VOCAL & CONSONANT COUNTER\n========================================================";
	cout << "\nYour Text/Name/Sentences : "; cin.getline(line, 150);
	
	for(i = 0; i < 150; i++){
		if(line[i] == 'a' || line[i] == 'A'
		|| line[i] == 'i' || line[i] == 'I'
		|| line[i] == 'u' || line[i] == 'U'
		|| line[i] == 'e' || line[i] == 'E'
		|| line[i] == 'o' || line[i] == 'O')
		{
			++vocal;
		}
		else if(line[i] >= 'a' && line[i] <= 'z' || line[i] >= 'A' && line[i] <= 'Z')
		{
			++consonant;
		}
	}
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
	cout << "\nVocal alphabets = " << vocal << endl;
	cout << "Consonant alphabest = " << consonant << endl;
	
}
