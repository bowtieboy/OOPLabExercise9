#include "WITFaculty.h"
#include<string>

// Constructor defined in header
WITFaculty::WITFaculty(std::string n, std::string email, int ID, std::string c, std::string o, double p) : WITPerson(n, email, ID)
{
	setCollege(c);
	setOffice(o);
	setPay(p);
	setType(3);
}

// Destructor defined in header
WITFaculty::~WITFaculty()
{
}

// Polymorphic function
std::string WITFaculty::payMe()
{
	std::string pay = WITPerson::name + " made $" + std::to_string(monthlyPay) + " this month.";
	return pay;
}

// Setters defined in header
void WITFaculty::setCollege(std::string newCollege)
{
	college = newCollege;
	return;
}
void WITFaculty::setOffice(std::string newOffice)
{
	officeLocation = newOffice;
	return;
}
void WITFaculty::setPay(double newPay)
{
	monthlyPay = newPay / 12;
	return;
}

// Getters defined in header
std::string WITFaculty::getCollege()
{
	return college;
}
std::string WITFaculty::getOffice()
{
	return officeLocation;
}
double WITFaculty::getPay()
{
	return monthlyPay;
}