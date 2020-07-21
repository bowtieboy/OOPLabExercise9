#include "WITStudent.h"

// Constructor defined in header
WITStudent::WITStudent(std::string n, std::string email, int ID, std::string m, std::string a) : WITPerson(n, email, ID)
{
	setMajor(m);
	setAdvisor(a);
}

// Destructor defined in header
WITStudent::~WITStudent()
{
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

// Getters defined in header
std::string WITStudent::getMajor()
{
	return major;
}
std::string WITStudent::getAdvisor()
{
	return advisor;
}