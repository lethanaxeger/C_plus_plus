#include <iostream>

using namespace std;

char line[150];
int i, f, g;
int m_count = 0, i_count = 0, s_count = 0, p_count = 0;

main(){
	
	cout << "By Fadlillah Bashir Al Hakim/2231130098/D3TT1C" << endl;
	cout << "\n========================================================\n	MISSISSIPI xD COUNTER\n========================================================";
	cout << "\nYour Text/Name/Sentences : "; cin.getline(line, 150);
	
	for(i = 0; i < 150; i++){
		if(line[i] == 'M' || line[i] == 'm')
		{
			++m_count;
		}
		else if(line[i] == 'I' || line[i] == 'i')
		{
			++i_count;
		}
		else if(line[i] == 'S' || line[i] == 's')
		{
			++s_count;	
		}
		else if(line[i] == 'P' || line[i] =='p')
		{
			++p_count;
		} 
	}
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
	cout << "\nThere' " << m_count << " M's' alphabet" << endl;
	cout << "There " << i_count << " I's' alphabet" << endl;
	cout << "There " << s_count << " S's' alphabet" << endl;
	cout << "There " << p_count << " P's' alphabet" << endl;
	
}
