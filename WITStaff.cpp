#include "WITStaff.h"

// Constructor defined in header
WITStaff::WITStaff(std::string n, std::string email, int ID, std::string d, std::string s) : WITPerson(n, email, ID)
{
	setDepartment(d);
	setSuper(s);
}

// Destructor defined in header
WITStaff::~WITStaff()
{
}

// Setters defined in header
void WITStaff::setDepartment(std::string newDep)
{
	department = newDep;
	return;
}
void WITStaff::setSuper(std::string newSuper)
{
	supervisor = newSuper;
	return;
}

// Getters defined in header
std::string WITStaff::getDepartment()
{
	return department;
}
std::string WITStaff::getSuper()
{
	return supervisor;
}