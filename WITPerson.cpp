#include "WITPerson.h"

// Constructor defined in header
WITPerson::WITPerson(std::string n, std::string email, int ID)
{
	setName(n);
	setEmail(email);
	setID(ID);
}

// Destructor defined in header
WITPerson::~WITPerson()
{
}

// Setters defined in header
void WITPerson::setName(std::string newName)
{
	name = newName;
	return;
}
void WITPerson::setEmail(std::string newEmail)
{
	emailAddress = newEmail;
	return;
}
void WITPerson::setID(int newID)
{
	WIT_ID = newID;
	return;
}
void WITPerson::setType(int newType)
{
	personType = newType;
	return;
}

// Getters defined in header
std::string WITPerson::getName()
{
	return name;
}
std::string WITPerson::getEmail()
{
	return emailAddress;
}
int WITPerson::getID()
{
	return WIT_ID;
}
int WITPerson::getType()
{
	return personType;
}