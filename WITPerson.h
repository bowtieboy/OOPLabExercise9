#pragma once
#include<string>

// Define the base class
class WITPerson
{
public:
	// Constructor prototype
	WITPerson(std::string n, std::string email, int ID);

	// Destructor prototype
	~WITPerson();
	
	// Setter prototypes
	void setName(std::string newName);
	void setEmail(std::string newEmail);
	void setID(int newID);

	// Getter prototypes
	std::string getName();
	std::string getEmail();
	int getID();

private:
	// Parameters that all classes share
	std::string name, emailAddress;
	int WIT_ID;
};