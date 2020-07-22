#include "WITStudent.h"
#include "WITStaff.h"
#include "WITFaculty.h"
#include <iostream>
#include <vector>

using namespace std;

void testPerson() 
{
	// Creating a single person to test the functionality
	WITPerson* NewStudent = new WITStudent("Matt Lima", "limam@wit.edu", 025, "Electrical Engineering", "Yugu", 18, 12);
	// Displaying the new pesons pay
	NewStudent->payMe();
	// Calling the destructor to get rid of the person
	NewStudent->~WITPerson();
	cout << endl;
}

void testArray()
{
	// Creating an array to test functionality
	WITPerson* people[3];
	people[0] = new WITStudent("Matt Lima", "limam@wit.edu", 025, "Electrical Engineering", "Yugu", 18, 12);
	people[1] = new WITStaff("Dow Jones", "jonesd@wit.edu", 032, "Finance", "God", 40, 75);
	people[2] = new WITFaculty("Jack Cough", "coughj@wit.edu", 420, "MassArt", "Beatty", 700);
	// Displaying the created array
	for (unsigned int i = 0; i < 3; i++)
	{
		people[i]->payMe();
	}
}

void menu()
{
	// This will be used as the user's input
	int userSelection;
	// This will display the menu
	cout << endl << "WIT Main Menu: " << endl;
	cout << "1. Add person" << endl;
	cout << "2. Remove person from database" << endl;
	cout << "3. Search by name" << endl;
	cout << "4. Search by WIT ID" << endl;
	cout << "5. Find pay by person" << endl;
	cout << "6. Display the data base" << endl;
	cout << "7. Quit" << endl;
	// This is reading the user's input
	cin >> userSelection;
	// Checking to make sure the user input is within the correct bounds
	if (userSelection > 0 && userSelection < 8)
	{
		switch (userSelection) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			exit(0);
			break;
		}
	}
}

int main()
{
	vector<WITPerson*> person;
	cout << "Why";
	// This is making the code run forever
	while (1) {
		menu();
	}
}