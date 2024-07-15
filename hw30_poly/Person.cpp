#include "Person.h"

Person::Person()
{
	address = "undefined";
}

Person::Person(const string& name, const string& phoneNumber, const string& address)
{
	this->name = name;
	this->phoneNumber = phoneNumber;
	this->address = address;
}

void Person::editContact()
{
	Contact::editContact();
	cout << "Enter edited address: ";
	cin >> address;
}

void Person::showInfo() const
{
	Contact::showInfo();
	cout << "Address: " << address << "\n";
}
