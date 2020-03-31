#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	string names[22] = {"Subho", "Subhajit", "Sayandip", "Siddhartha", "Anirudra",
		"Souvik", "Partha", "Arundhuti", "Madhurima", "Prerona", "Sohini", "Ashis",
		"Ankita", "Ishika", "Shreyasi", "Atanu", "Soumyadeep", "Ashmita", "Anand",
		"Sanmoy", "Himadri", "Abhishek"};
	
	for(int i = 0; i < 22; i++){
		cout << '|';
		cout.fill('_');
		cout.width(20);
		cout << right << names[i] << '|' << endl;
	}
	
	for(int i = 0; i < 22; i++){
		cout << '|';
		cout.fill('_');
		cout.width(20);
		cout << left << names[i] << '|' << endl;
	}
	
	return 0;
}
