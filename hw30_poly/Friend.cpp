#include "Friend.h"

Friend::Friend()
{
	address = "undefined";
	birthday = "undefined";
}

Friend::Friend(const string& name, const string& phoneNumber, const string& address, const string& birthday)
{
	this->name = name;
	this->phoneNumber = phoneNumber;
	this->address = address;
	this->birthday = birthday;
}

void Friend::showInfo() const
{
	Contact::showInfo();
	cout << "Address: " << address << "\n";
	cout << "Birthday: " << birthday << "\n";
}
