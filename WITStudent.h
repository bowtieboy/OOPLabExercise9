#pragma once
#include "WITPerson.h"

// Define inherited class
class WITStudent : public WITPerson
{
public:
	// Constructor prototype
	WITStudent(std::string n, std::string email, int ID, std::string m, std::string a);
	
	// Destructor prototype
	~WITStudent();
	
	// Setter prototypes
	void setMajor(std::string newMajor);
	void setAdvisor(std::string newAdvisor);
	
	// Getter prototypes
	std::string getMajor();
	std::string getAdvisor();

private:
	// Parameters for the WIT student
	std::string major, advisor;
};