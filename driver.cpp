#include "WITStudent.h"
#include "WITStaff.h"
#include "WITFaculty.h"
#include <iostream>
#include <vector>

using namespace std;

//void testPerson() 
//{
//	// Creating a single person to test the functionality
//	WITPerson* NewStudent = new WITStudent("Matt Lima", "limam@wit.edu", 025, "Electrical Engineering", "Yugu", 18, 12);
//	// Displaying the new pesons pay
//	NewStudent->payMe();
//	// Calling the destructor to get rid of the person
//	NewStudent->~WITPerson();
//	cout << endl;
//}
//
//void testArray()
//{
//	// Creating an array to test functionality
//	WITPerson* people[3];
//	people[0] = new WITStudent("Matt Lima", "limam@wit.edu", 025, "Electrical Engineering", "Yugu", 18, 12);
//	people[1] = new WITStaff("Dow Jones", "jonesd@wit.edu", 032, "Finance", "God", 40, 75);
//	people[2] = new WITFaculty("Jack Cough", "coughj@wit.edu", 420, "MassArt", "Beatty", 700);
//	// Displaying the created array
//	for (unsigned int i = 0; i < 3; i++)
//	{
//		people[i]->payMe();
//	}
//}

void menu(vector<WITPerson*> people)
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
	// Variables used by the menu
	string name, email, major, advisor, department, super, college, office;
	int id, pType, hours, rate, salary;
	WITStudent* student;
	WITStaff* staff;
	WITFaculty* faculty;
	// Checking to make sure the user input is within the correct bounds
	if (userSelection > 0 && userSelection < 8)
	{
		switch (userSelection) {
		case 1:
			cout << "Enter the person's name: ";
			getline(cin, name);
			cout << "Enter the peron's email: ";
			getline(cin, email);
			cout << "Enter the person's ID: ";
			cin >> id;
			cout << "Enter the person type (1 - Student, 2 - Staff, 3 - Faculty): ";
			cin >> pType;

			switch (pType)
			{
			case 1:
				cout << "Enter the student's major: ";
				getline(cin, major);
				cout << "Enter the student's advisor: ";
				getline(cin, advisor);
				cout << "Enter the hours worked by the student: ";
				cin >> hours;
				cout << "Enter the hourly rate of the student: ";
				cin >> rate;
				people.push_back(new WITStudent(name, email, id, major, advisor, hours, rate));
				break;
			case 2:
				cout << "Enter the staff's department: ";
				getline(cin, department);
				cout << "Enter the staff's supervisor: ";
				getline(cin, super);
				cout << "Enter the hours worked by the staff: ";
				cin >> hours;
				cout << "Enter the hourly rate of the staff: ";
				cin >> rate;
				people.push_back(new WITStaff(name, email, id, department, super, hours, rate));
				break;
			case 3:
				cout << "Enter the faculty's college: ";
				getline(cin, college);
				cout << "Enter the faculty's office: ";
				getline(cin, office);
				cout << "Enter the faculty's salary: ";
				cin >> salary;
				people.push_back(new WITFaculty(name, email, id, college, office, salary));
				break;
			}

			break;
		case 2:
			cout << "Enter the person's name to be deleted: ";
			getline(cin, name);
			for (int i = 0; i < people.size(); i++)
			{
				if (people[i]->getName() == name)
				{
					people.erase(people.begin() + i);
					break;
				}
			}
			cout << "No person with the name " + name + " was found in the database.";
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
	vector<WITPerson*> people;
	// This is making the code run forever
	while (1) {
		menu(people);
	}
}