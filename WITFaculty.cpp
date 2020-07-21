#include "WITFaculty.h"

// Constructor defined in header
WITFaculty::WITFaculty(std::string n, std::string email, int ID, std::string c, std::string o) : WITPerson(n, email, ID)
{
	setCollege(c);
	setOffice(o);
}

// Destructor defined in header
WITFaculty::~WITFaculty()
{

}

// Polymorphic function
void WITFaculty::payMe()
{
	std::cout << getName() << "'s weekly pay is: $" << std::setprecision(4) << getPay() << std::endl;
	return;
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
	weeklyPay = newPay;
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
	return weeklyPay;
}