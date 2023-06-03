#include <iostream>
#include <string>
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
	int lOption;
	string languages[] = { "English", "Spanish", "Arabic", "French", "Italian" };
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
	}

}

string specialMenu()
{
	//Print all medical specialties. Request user input for medical specialty.
	//
}

void returnCountry(string arr[])
{
	//Use indexes to generate random numbers to determine the two countries of each language
	

	switch () 
	{

	}
}