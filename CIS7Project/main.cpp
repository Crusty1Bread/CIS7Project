#include <iostream>
#include <cmath>

using namespace std;

string langMenu();
string specialMenu();

int main()
{
	// variables
	string specialty;

	// arrays
	string country[] = { "United States", "United Kingdom", "Mexico", "Costa Rica", "Saudi Arabia", "Afghanistan", "France", "Haiti", "Italy", "Sicily" };
	string languages[] = { "English", "Spanish", "Arabic", "French", "Italian" };

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
	cout << "Language Options:\n--------------\n";
	cout << "1. English\n2. Spanish\n3. Arabic\n4. French\n5. Italian";
	cout << "--------------\n";

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
	case 1 :
		cout << "You entered : " << o1 << endl;
		return o1;
		break;
	case 2 :
		cout << "You entered : " << o2 << endl;
		return o2;
		break;
	case 3 :
		cout << "You entered : " << o3 << endl;
		return o3;
		break;
	case 4 :
		cout << "You entered : " << o4 << endl;
		return o4;
		break;
	case 5 :
		cout << "You entered : " << o5 << endl;
		return o5;
		break;
	} 
}

void returnCountry(string arr[])
{
	//Use indexes to generate random numbers to determine the two countries of each language


	switch ()
	{

	}
}