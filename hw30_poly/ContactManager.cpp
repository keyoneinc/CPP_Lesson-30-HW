#include "ContactManager.h"

void ContactManager::addContact(Contact contact)
{
	contacts.push_back(contact);
}

void ContactManager::editContact(const string& name)
{
    for (auto& contact : contacts) {
        if (contact.getName() == name) {
            contact.editContact();
            cout << "Contact edited.\n";
            return;
        }
    }
    cout << "Contact not found.\n";
}

void ContactManager::removeContact(const string& name)
{
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

void ContactManager::showContacts() const
{
    for (const auto& contact : contacts) {
        contact.showInfo();
        cout << "\n";
    }
}
