#pragma once
#include <string>
#include <iostream>
using namespace std;

class Contact
{
protected:
    string name;
    string phoneNumber;

public:
    Contact();
    Contact(const string& name, const string& phoneNumber);
    virtual ~Contact();

    virtual void showInfo() const;

};

