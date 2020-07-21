#pragma once
#include "WITPerson.h"

// Define inherited class
class WITStaff : public WITPerson {
public:
	// Constructor prototype
	WITStaff(std::string n, std::string email, int ID, std::string d, std::string s);

	// Destructor prototype
	~WITStaff();

	// Setter prototypes
	void setDepartment(std::string newDep);
	void setSuper(std::string newSuper);

	// Getter prototypes
	std::string getDepartment();
	std::string getSuper();

private:
	// Parameters for the WIT staff
	std::string department, supervisor;
};