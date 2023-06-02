#include <iostream>
#include <cmath>

using namespace std;

string langMenu();
string specialMenu();

int main()
{
	// variables
	int specialty;
	// arrays
	string country[] = { "United States", "United Kingdom", "Mexico", "Costa Rica", "Saudi Arabia", "Afghanistan", "France", "Haiti", "Italy", "Sicily" };
	string languages[] = { "English", "Spanish", "Arabic", "French", "Italian" };

	specialty = specialMenu();

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
	//Print all medical specialties. Request user input for medical specialty.
	cout << "Specialty Options:" << endl;
	cout << "-------------------" << endl;
	cout << "1. Cardiology" << endl;
	cout << "2. Infectious Disease" << endl;
	cout << "3. Occupational Medicine" << endl;
	cout << "4. Pediatrics" << endl;
	cout << "5. Maternal-Fetal Medicine" << endl;
	cout << "-------------------" << endl;
	// Request user input
	cout << "Please select an option (1 - 5): ";
	cin >> sOption;


}

void returnCountry(string arr[])
{
	//Use indexes to generate random numbers to determine the two countries of each language


	switch ()
	{

	}
}