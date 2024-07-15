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

void Contact::setName(string name)
{
	this->name = name;
}

void Contact::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

string Contact::getName() const
{
	return name;
}

string Contact::getPhoneNumber() const
{
	return phoneNumber;
}

void Contact::showInfo() const
{
	cout << "Name: " << name << "\n";
	cout << "Phone Number: " << phoneNumber << "\n";
}
