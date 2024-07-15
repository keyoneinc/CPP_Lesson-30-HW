#include <iostream>
#include "ContactManager.h"
using namespace std;

int main() {
    ContactManager manager;
    int choice;
    string name, phoneNumber, address, organization, fax, contactPerson, birthday;

    do {
        cout << "Menu:\n";
        cout << "1. Add Contact\n";
        cout << "2. Remove Contact\n";
        cout << "3. Edit Contact\n";
        cout << "4. Show All Contacts\n";
        cout << "5. Search Contact\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Choose type of contact:\n";
            cout << "1. Person\n";
            cout << "2. Colleague\n";
            cout << "3. Friend\n";
            cout << "Enter your choice: ";
            int type;
            cin >> type;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter phone number: ";
            cin >> phoneNumber;

            if (type == 1) {
                cout << "Enter address: ";
                cin >> address;
                manager.addContact(Person(name, phoneNumber, address));
            }
            else if (type == 2) {
                cout << "Enter organization: ";
                cin >> organization;
                cout << "Enter address: ";
                cin >> address;
                cout << "Enter fax: ";
                cin >> fax;
                cout << "Enter contact person: ";
                cin >> contactPerson;
                manager.addContact(Colleague(name, phoneNumber, organization, address, fax, contactPerson));
            }
            else if (type == 3) {
                cout << "Enter address: ";
                cin >> address;
                cout << "Enter birthday: ";
                cin >> birthday;
                manager.addContact(Friend(name, phoneNumber, address, birthday));
            }
            break;

        case 2:
            cout << "Enter name of contact to remove: ";
            cin >> name;
            manager.removeContact(name);
            break;

        case 3:
            cout << "Enter name of contact to edit: ";
            cin >> name;
            manager.editContact(name);
            break;

        case 4:
            manager.showContacts();
            break;

        case 5:
            cout << "Enter name of contact to search: ";
            cin >> name;
            manager.searchContacts(name);
            break;

        case 6:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;


}