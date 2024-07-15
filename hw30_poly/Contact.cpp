#include "Contact.h"

Contact::Contact()
{
	name = "undefined";
	phoneNumber = "undefined";
}

Contact::Contact(const string& name, const string& phoneNumber)
{
	this->name = name;
	this->phoneNumber = phoneNumber;
}

Contact::~Contact()
{
}

void Contact::showInfo() const
{
	cout << "Name: " << name << "\n";
	cout << "Phone Number: " << phoneNumber << "\n";
}
