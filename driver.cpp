#include "WITStudent.h"
#include "WITStaff.h"
#include "WITFaculty.h"
#include <iostream>

using namespace std;

int main()
{
	WITPerson* NewStudent = new WITStudent("Matt", "Lima", 025, "Electrical Engineering", "Yugu", 18, 12);
	NewStudent->payMe();

	return 0;
}