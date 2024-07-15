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
    void addContact(Contact contact) {
        contacts.push_back(contact);
    }

    void removeContact(const string& name) {
        auto it = remove_if(contacts.begin(), contacts.end(), [&](const Contact& contact) {
            return contact.getName() == name;
            });
        if (it != contacts.end()) {
            contacts.erase(it, contacts.end());
            cout << "Contact removed.\n";
        }
        else {
            cout << "Contact not found.\n";
        }
    }

    void showContacts() const {
        for (const auto& contact : contacts) {
            contact.showInfo();
            cout << "\n";
        }
    }

};

