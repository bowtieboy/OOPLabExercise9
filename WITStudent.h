#pragma once
#include "WITPerson.h"
#include<string>

// Define inherited class
class WITStudent : public WITPerson
{
public:
	// Constructor prototype
	WITStudent(std::string n, std::string email, int ID, std::string m, std::string a, double h, double r);
	
	// Destructor prototype
	~WITStudent();
	
	// Setter prototypes
	void setMajor(std::string newMajor);
	void setAdvisor(std::string newAdvisor);
	void setHours(double newHours);
	void setRate(double newRate);

	// Getter prototypes
	std::string getMajor();
	std::string getAdvisor();
	double getHours();
	double getRate();
	double getTotal();
	// Polymorphic function
	virtual std::string payMe();
	virtual void getInfo();

private:
	// Parameters for the WIT student
	std::string major, advisor;
	double hoursWorked, hourlyRate;
};