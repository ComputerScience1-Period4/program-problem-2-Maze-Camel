/*
Maaz Kamal - Period 4

Assignment Name: Take in Data

Display Data, Accept User Response, Display Changed Data
*/

#include <iostream>
#include <conio.h>
using namespace std;

void pause() {
	cout << " Press any key to continue . . . ";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	int todays_date; // whats todays date?
	char favorite_letter; // whats your favorite letter?	
	double height; // how tall are you?
	double my_height = 5.9;// my height
	bool iz_u_taller_dan_me; 
	bool ha_i_iz_taller;

// user  quarries
	cout << "What is todays date?" << endl;
	cin >> todays_date;
	cout << "What is your favorite letter?" << endl;
	cin >> favorite_letter;
	cout << "How tall are you?" << endl;
	cin >> height;
	iz_u_taller_dan_me = height > my_height;// checks to see if your taller
	ha_i_iz_taller = height < my_height;//checks to see if your shorter

// After questions print out stored data	
	cout << "Is it really the " << todays_date << " of the month already? WOW!" << endl;
	cout << "WOW! your favorite letter is " << favorite_letter << " mine is 'm'." << endl;
	cout << "Are you really " << height << endl;

	if (iz_u_taller_dan_me) {
		cout << "You are really tall!" << endl;//this prints if your taller
	}
	if (ha_i_iz_taller) {
		cout << "SHORTY!!!" << endl;//this prints if your shorter
	}
		
	pause();
}