#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string langMenu();
string specialMenu();
string returnCountry(string language);

string languages[] = { "English", "Spanish", "Arabic", "French", "Italian" };
string country[] = { "United States", "United Kingdom", "Mexico", "Costa Rica", "Saudi Arabia", "Afghanistan", "France", "Haiti", "Italy", "Sicily" };
string o1 = "Cardiology", o2 = "Infectious Disease", o3 = "Occupational Medicine", o4 = "Pediatrics", o5 = "Maternal-Fetal Medicine";

int main()
{
	// variables
	string specialty, language, country;

	specialty = specialMenu(); // call the print specialty menu which will print the menu and return the selected option
	language = langMenu();
	country = returnCountry(language);

	cout << "\nYour chosen country is " << country << endl;
	cout << "\nThe sample space is amount of languages multiplied by number of specializations." << endl;
	cout << "5 * 5 = 25" << endl;
	cout << "The probability of chooseing one language and one occupation is 1/25 which is 4%";



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
	cout << "1. English\n2. Spanish\n3. Arabic\n4. French\n5. Italian\n";
	cout << "--------------\n";

	cout << "Please enter an option (1 - 5): ";
	cin >> lOption;

	switch (lOption)
	{
	case 1:
		cout << "\nYou entered : " << languages[0] << endl;
		return languages[0];
		break;
	case 2:
		cout << "\nYou entered : " << languages[1] << endl;
		return languages[1];
		break;
	case 3:
		cout << "\nYou entered : " << languages[2] << endl;
		return languages[2];
		break;
	case 4:
		cout << "\nYou entered : " << languages[3] << endl;
		return languages[3];
		break;
	case 5:
		cout << "\nYou enterd : " << languages[4] << endl;
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
		cout << "\nYou entered : " << o1 << endl;
		return o1;
		break;
	case 2:
		cout << "\nYou entered : " << o2 << endl;
		return o2;
		break;
	case 3:
		cout << "\nYou entered : " << o3 << endl;
		return o3;
		break;
	case 4:
		cout << "\nYou entered : " << o4 << endl;
		return o4;
		break;
	case 5:
		cout << "\nYou entered : " << o5 << endl;
		return o5;
		break;
	}
}

string returnCountry(string l)
{
	//Use indexes to generate random numbers to determine the two countries of each language
	//(rand() % 2) + N

	if (l == "English")
	{
		return country[rand() % 2];
	} if (l == "Spanish")
	{
		return country[(rand() % 2) + 2];
	} if (l == "Arabic")
	{
		return country[(rand() % 2) + 4];
	} if (l == "French")
	{
		return country[(rand() % 2) + 6];
	} if (l == "Italian")
	{
		return country[(rand() % 2) + 8];
	}
}