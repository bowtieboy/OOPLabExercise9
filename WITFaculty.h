#pragma once
#include "WITPerson.h"

// Define inherited class
class WITFaculty : public WITPerson
{
public:
	// Consturctor prototype
	WITFaculty(std::string n, std::string email, int ID, std::string c, std::string o, double pay);
	
	// Destructor prototype
	~WITFaculty();
	
	// Setter prototypes
	void setCollege(std::string newCollege);
	void setOffice(std::string newOffice);
	void setPay(double newPay);
	
	// Getter prototypes
	std::string getCollege();
	std::string getOffice();
	double getPay();

	// Polymorphic function
	virtual void payMe();

private:
	// Parameters for the WIT Faculty
	std::string college, officeLocation;
	double weeklyPay;
};