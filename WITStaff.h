#pragma once
#include "WITPerson.h"

// Define inherited class
class WITStaff : public WITPerson {
public:
	// Constructor prototype
	WITStaff(std::string n, std::string email, int ID, std::string d, std::string s, double h, double r);

	// Destructor prototype
	~WITStaff();

	// Setter prototypes
	void setDepartment(std::string newDep);
	void setSuper(std::string newSuper);
	void setHours(double newHours);
	void setRate(double newRate);

	// Getter prototypes
	std::string getDepartment();
	std::string getSuper();
	double getHours();
	double getRate();

	// Polymorphic function
	virtual double payMe();

private:
	// Parameters for the WIT staff
	std::string department, supervisor;
	double hoursWorked, hourlyRate;
};