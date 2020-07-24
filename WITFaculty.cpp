#include "WITFaculty.h"
#include<string>
#include<sstream>

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
	std::stringstream string;
	string << std::fixed << std::setprecision(2) << monthlyPay;
	std::string pay = WITPerson::name + " made $" + string.str() + " this month.";
	return pay;
}
void WITFaculty::getInfo()
{
	std::cout << "Faculty Name: " << WITPerson::name << std::endl;
	std::cout << "Email Address: " << WITPerson::emailAddress << std::endl;
	std::cout << "WIT ID Number: " << WITPerson::WIT_ID << std::endl;
	std::cout << "College: " << college << std::endl;
	std::cout << "Office Location: " << officeLocation << std::endl;
	std::cout << "Monthly Pay: " << getPay() << std::endl;
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