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

    void setName(string name);
    void setPhoneNumber(string phoneNumber);

    string getName() const;
    string getPhoneNumber() const;
    
    virtual void showInfo() const;

};

