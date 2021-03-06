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
	void setType(int newType);

	// Getter prototypes
	std::string getName();
	std::string getEmail();
	int getID();
	int getType();

	// Define virtual function that turns WITPerson into an abstract class
	virtual std::string payMe() = 0; // Pure virtual function
	virtual void getInfo() = 0; // This will be used to display the person's information

protected:
	// Parameters that all classes share
	std::string name, emailAddress, info;
	int WIT_ID, personType;
};