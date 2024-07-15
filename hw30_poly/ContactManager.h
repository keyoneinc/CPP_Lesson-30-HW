#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include "Contact.h"
#include "Person.h"
#include "Colleague.h"
#include "Friend.h"
using namespace std;

class ContactManager
{
private:
	vector<Contact> contacts;

public:
    void addContact(Contact contact);
    void editContact(const string& name);

    void removeContact(const string& name);

    void showContacts() const;

    void searchContacts(const string& name) const {
        for (const auto& contact : contacts) {
            if (contact.getName() == name) {
                contact.showInfo();
                return;
            }
        }
        cout << "Contact not found.\n";
    }

};

