#include "WITStudent.h"
#include "WITStaff.h"
#include "WITFaculty.h"
#include <iostream>
#include <vector>

using namespace std;

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
			cin.ignore();
			getline(cin, name);
			cout << "Enter the peron's email: ";
			cin >> email;
			cout << "Enter the person's ID: ";
			cin >> id;
			cout << "Enter the person type (1 - Student, 2 - Staff, 3 - Faculty): ";
			cin >> pType;

			switch (pType)
			{
			case 1:
				cout << "Enter the student's major: ";
				cin.ignore();
				getline(cin, major);
				cout << "Enter the student's advisor: ";
				cin.ignore();
				getline(cin, advisor);
				cout << "Enter the hours worked by the student: ";
				cin >> hours;
				cout << "Enter the hourly rate of the student: ";
				cin >> rate;
				people.push_back(new WITStudent(name, email, id, major, advisor, hours, rate));
				break;
			case 2:
				cout << "Enter the staff's department: ";
				cin.ignore();
				getline(cin, department);
				cout << "Enter the staff's supervisor: ";
				cin.ignore();
				getline(cin, super);
				cout << "Enter the hours worked by the staff: ";
				cin >> hours;
				cout << "Enter the hourly rate of the staff: ";
				cin >> rate;
				people.push_back(new WITStaff(name, email, id, department, super, hours, rate));
				break;
			case 3:
				cout << "Enter the faculty's college: ";
				cin.ignore();
				getline(cin, college);
				cout << "Enter the faculty's office: ";
				cin.ignore();
				getline(cin, office);
				cout << "Enter the faculty's salary: ";
				cin >> salary;
				people.push_back(new WITFaculty(name, email, id, college, office, salary));
				break;
			}

			break;
		case 2:
			cout << "Enter the person's name to be deleted: ";
			cin.ignore();
			getline(cin, name);
			for (int i = 0; i < people.size(); i++)
			{
				if (people[i]->getName() == name)
				{
					people.erase(people.begin() + i);
					break;
				}
			}
			cout << "No person with the name " + name + " was found in the database." << endl;
			break;
		case 3:
			cout << "Enter the person's name: ";
			cin.ignore();
			getline(cin, name);
			for (int i = 0; i < people.size(); i++)
			{
				if (people[i]->getName() == name)
				{
					people[i]->getInfo();
					break;
				}
				cout << i;
			}
			cout << "No person with the name " + name + " was found in the database." << endl;
			break;
		case 4:
			cout << "Enter the person's WIT ID: ";
			cin >> id;
			for (int i = 0; i < people.size(); i++)
			{
				if (people[i]->getID() == id)
				{
					people[i]->getInfo();
					break;
				}
			}
			cout << "No ID " << id << " was found in the database." << endl;
			break;
		case 5:
			cout << "Enter the person's name: ";
			cin.ignore();
			getline(cin, name);
			for (int i = 0; i < people.size(); i++)
			{
				if (people[i]->getName() == name)
				{
					people[i]->payMe();
					break;
				}
			}
			cout << "No person with the name " + name + " was found in the database." << endl;
			break;
		case 6:
			cout << "Displaying the data base information: " << endl;
			for (int i = 0; i < people.size(); i++)
			{
				people[i]->getInfo();
			}
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