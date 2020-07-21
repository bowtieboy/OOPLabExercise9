#include "WITStudent.h"
#include "WITStaff.h"
#include "WITFaculty.h"
#include <iostream>

using namespace std;

int main()
{
	// Getting only two decmil places

	// Testing to make sure that everything is working correctly 
	WITPerson* NewStudent = new WITStudent("Matt Lima", "limam@wit.edu", 025, "Electrical Engineering", "Yugu", 18, 12);
	NewStudent->payMe();
	NewStudent->~WITPerson();
	cout << endl << endl;

	// Creating an array to test the functionality
	WITPerson* people[3];
	people[0] = new WITStudent("Matt Lima", "limam@wit.edu", 025, "Electrical Engineering", "Yugu", 18, 12);
	people[1] = new WITStaff("Dow Jones", "jonesd@wit.edu", 032, "Finance", "God", 40, 75);
	people[2] = new WITFaculty("Jack Cough", "coughj@wit.edu", 420, "MassArt", "Beatty", 700);

	for (unsigned int i = 0; i < 3; i++)
	{
		people[i]->payMe();
	}

	return 0;
}