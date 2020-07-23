#include "WITStaff.h"
#include<string>

// Constructor defined in header
WITStaff::WITStaff(std::string n, std::string email, int ID, std::string d, std::string s, double h, double r) : WITPerson(n, email, ID)
{
	setDepartment(d);
	setSuper(s);
	setHours(h);
	setRate(r);
	setType(2);
}

// Destructor defined in header
WITStaff::~WITStaff()
{
}

// Polymorphic function
std::string WITStaff::payMe()
{
	double payCheck = 0;

	// Check if overtime was earned and calcualte paycheck
	if (getHours() > 40)
	{
		payCheck += (getHours() - 40) * getRate() * 1.5;
		payCheck += 40 * getRate();
	}
	else payCheck = getHours() * getRate();

	std::string pay = WITPerson::name + " made $" + std::to_string(payCheck) + " this month.";

	return pay;
}
void WITStaff::getInfo()
{
	std::cout << "Staff Name: " << WITPerson::name << std::endl;
	std::cout << "Email Address: " << WITPerson::emailAddress << std::endl;
	std::cout << "WIT ID Number: " << WITPerson::WIT_ID << std::endl;
	std::cout << "Department: " << department << std::endl;
	std::cout << "Supervisor: " << supervisor << std::endl;
	std::cout << "Monthly Pay: " << getTotal() << std::endl;
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
double WITStaff::getTotal()
{
	return hoursWorked * hourlyRate;
}