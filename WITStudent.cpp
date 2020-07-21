#include "WITStudent.h"

// Constructor defined in header
WITStudent::WITStudent(std::string n, std::string email, int ID, std::string m, std::string a, double h, double r) : WITPerson(n, email, ID)
{
	setMajor(m);
	setAdvisor(a);
	setHours(h);
	setRate(r);
}

// Destructor defined in header
WITStudent::~WITStudent()
{
}

// Polymorphic function
void WITStudent::payMe()
{
	// Calculate paycheck
	double payCheck = getHours() * getRate();
	std::cout << getName() << "'s weekly pay is: $" << std::setprecision(4) << payCheck << std::endl;
	return;
}

// Setters defined in header
void WITStudent::setMajor(std::string newMajor)
{
	major = newMajor;
	return;
}
void WITStudent::setAdvisor(std::string newAdvisor)
{
	advisor = newAdvisor;
	return;
}
void WITStudent::setHours(double newHours)
{
	hoursWorked = newHours;
	return;
}
void WITStudent::setRate(double newRate)
{
	hourlyRate = newRate;
	return;
}

// Getters defined in header
std::string WITStudent::getMajor()
{
	return major;
}
std::string WITStudent::getAdvisor()
{
	return advisor;
}
double WITStudent::getHours()
{
	return hoursWorked;
}
double WITStudent::getRate()
{
	return hourlyRate;
}