#include "Colleague.h"

Colleague::Colleague()
{
    organization = "undefined";
    address = "undefined";
    fax = "undefined";
    contactPerson = "undefined";
}

Colleague::Colleague(const string& name, const string& phoneNumber, const string& organization, const string& address, const string& fax, const string& contactPerson)
{
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->organization = organization;
    this->address = address;
    this->fax = fax;
    this->contactPerson = contactPerson;
}

void Colleague::editContact()
{
    Contact::editContact();
    cout << "Enter edited organization: ";
    cin >> organization;
    cout << "Enter edited address: ";
    cin >> address;
    cout << "Enter edited fax: ";
    cin >> fax;
    cout << "Enter edited contact person: ";
    cin >> contactPerson;
}

void Colleague::showInfo() const
{
    Contact::showInfo();
    cout << "Organization: " << organization << "\n";
    cout << "Address: " << address << "\n";
    cout << "Fax: " << fax << "\n";
    cout << "Contact Person: " << contactPerson << "\n";
}
