#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string langMenu();
string specialMenu();
string returnCountry();

string languages[] = { "English", "Spanish", "Arabic", "French", "Italian" };
string country[] = { "United States", "United Kingdom", "Mexico", "Costa Rica", "Saudi Arabia", "Afghanistan", "France", "Haiti", "Italy", "Sicily" };
string o1 = "Cardiology", o2 = "Infectious Disease", o3 = "Occupational Medicine", o4 = "Pediatrics", o5 = "Maternal-Fetal Medicine";

int main() 
{
	// variables
	string specialty, language, country;

	specialty = specialMenu(); // call the print specialty menu which will print the menu and return the selected option

	/*string language, specialty;
	* 
	* 
	* language = printLangMenu();
	* 
	* specialty = printSpecialMenu();
	* 
	* 
	* double sampleSpace = country.length() * languages.length();
	* double prob = 100 * (1/sampleSpace);
	* 
	* cout << "The chances of this combination is << prob << "%. " << endl;
	*/


}

string langMenu()
{
	int lOption;
	cout << "Language Options:\n--------------\n";
	cout << "1. English\n2. Spanish\n3. Arabic\n4. French\n5. Italian";
	cout << "--------------\n";

	cout << "Please enter an option (1 - 5): ";
	cin >> lOption;

	switch (lOption)
	{
	case 1:
		cout << "You entered : " << languages[0] << endl;
		return languages[0];
		break;
	case 2:
		cout << "You entered : " << languages[1] << endl;
		return languages[1];
		break;
	case 3:
		cout << "You entered : " << languages[2] << endl;
		return languages[2];
		break;
	case 4:
		cout << "You entered : " << languages[3] << endl;
		return languages[3];
		break;
	case 5:
		cout << "You enterd : " << languages[4] << endl;
		return languages[4];
		break;

	}

}

string specialMenu()
{
	// variables
	int sOption;
	string o1 = "Cardiology", o2 = "Infectious Disease", o3 = "Occupational Medicine", o4 = "Pediatrics", o5 = "Maternal-Fetal Medicine";
	//Print all medical specialties. Request user input for medical specialty.
	cout << "Specialty Options:" << endl;
	cout << "-------------------" << endl;
	cout << "1. " << o1 << endl;
	cout << "2. " << o2 << endl;
	cout << "3. " << o3 << endl;
	cout << "4. " << o4 << endl;
	cout << "5. " << o5 << endl;
	cout << "-------------------" << endl;
	// Request user input
	cout << "Please enter an option (1 - 5): ";
	cin >> sOption;
	// Switch statement outputs and returns the user's choice
	switch (sOption)
	{
	case 1:
		cout << "You entered : " << o1 << endl;
		return o1;
		break;
	case 2:
		cout << "You entered : " << o2 << endl;
		return o2;
		break;
	case 3:
		cout << "You entered : " << o3 << endl;
		return o3;
		break;
	case 4:
		cout << "You entered : " << o4 << endl;
		return o4;
		break;
	case 5:
		cout << "You entered : " << o5 << endl;
		return o5;
		break;
	}
}

string returnCountry(string arr[], string l)
{
	//Use indexes to generate random numbers to determine the two countries of each language
	//(rand() % (whatever two number)) + 1

	if (l == "English")
	{
		return arr[rand() % 2];
	} if (l == "Spanish")
	{
		return arr[(rand() % 2) + 2];
	} if (l == "Arabic")
	{
		return arr[(rand() % 2) + 4];
	} if (l == "French")
	{
		return arr[(rand() % 2) + 6];
	} if (l == "Italian")
	{
		return arr[(rand() % 2) + 8];
	}
}