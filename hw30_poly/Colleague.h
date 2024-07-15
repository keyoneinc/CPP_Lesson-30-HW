#pragma once
#include "Contact.h"
class Colleague :
    public Contact
{
private:
    string organization;
    string address;
    string fax;
    string contactPerson;
public:
    Colleague();
    Colleague(const string& name, const string& phoneNumber, const string& organization,
        const string& address, const string& fax, const string& contactPerson);

    void showInfo() const override;
};

