#pragma once
#include "Contact.h"
class Person :
    public Contact
{
private:
    string address;
public:
    Person();
    Person(const string& name, const string& phoneNumber, const string& address);

    void showInfo() const override;

};

