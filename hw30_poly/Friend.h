#pragma once
#include "Contact.h"
class Friend :
    public Contact
{
private:
    string address;
    string birthday;
public:
    Friend();
    Friend(const string& name, const string& phoneNumber, const string& address, const string& birthday);

    void showInfo() const override;
};

