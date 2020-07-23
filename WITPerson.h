#pragma once
#include<string>
#include<iostream>
#include<iomanip>

// Define the abstract base class
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

	// Define virtual function that turns WITPerson into an abstract class
	virtual double payMe() = 0; // Pure virtual function

protected:
	// Parameters that all classes share
	std::string name, emailAddress;
	int WIT_ID;
};