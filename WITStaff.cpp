#include "WITStaff.h"

// Constructor defined in header
WITStaff::WITStaff(std::string n, std::string email, int ID, std::string d, std::string s, double h, double r) : WITPerson(n, email, ID)
{
	setDepartment(d);
	setSuper(s);
}

// Destructor defined in header
WITStaff::~WITStaff()
{
}

// Polymorphic function
void WITStaff::payMe()
{
	double payCheck = 0;

	// Check if overtime was earned and calcualte paycheck
	if (getHours() > 40)
	{
		payCheck += (getHours() - 40) * getRate() * 1.5;
		payCheck += 40 * getRate();
	}
	else payCheck = getHours() * getRate();

	std::cout << getName() << "'s weekly pay is: $" << std::setprecision(4) << payCheck << std::endl;
	return;
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
void WITStaff::setHours(double newHours)
{
	hoursWorked = newHours;
	return;
}
void WITStaff::setRate(double newRate)
{
	hourlyRate = newRate;
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
double WITStaff::getHours()
{
	return hoursWorked;
}
double WITStaff::getRate()
{
	return hourlyRate;
}