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

void Friend::editContact()
{
	Contact::editContact();
	cout << "Enter edited address: ";
	cin >> address;
	cout << "Enter edited birthday: ";
	cin >> birthday;
}

void Friend::showInfo() const
{
	Contact::showInfo();
	cout << "Address: " << address << "\n";
	cout << "Birthday: " << birthday << "\n";
}
