#include "ContactBook.h"
#include "ContactUtils.h"

ContactBook::ContactBook() {
    this->contactBook = ContactUtils::readContactsFile();
}

const vector<Contact> &ContactBook::getContactBook() const {
    return contactBook;
}

void ContactBook::setContactBook(const vector<Contact> &contactBook) {
    ContactBook::contactBook = contactBook;
}

void ContactBook::addContact(Contact contact) {
    this->contactBook.push_back(contact);
    ContactUtils::appendContactToFile(contact);
}

vector<Contact> ContactBook::searchContactsByFirstName(string firstName) {
    vector<Contact> result;
    for (Contact contact: this->contactBook) {
        if (ContactUtils::toLowerCase(contact.getFirstName()) == ContactUtils::toLowerCase(firstName)) {
            result.push_back(contact);
        }
    }
    return result;
}


