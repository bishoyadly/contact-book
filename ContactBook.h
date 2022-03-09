#include<bits/stdc++.h>
#include "Contact.h"

using namespace std;

class ContactBook {

private:
    vector<Contact> contactBook;
public:

    ContactBook();

    void addContact(Contact contact);

    const vector<Contact> &getContactBook() const;

    void setContactBook(const vector<Contact> &contactBook);

    vector<Contact> searchContactsByFirstName(string firstName);

};


