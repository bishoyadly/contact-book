#include<bits/stdc++.h>
#include "Contact.h"


int Contact::idCounter = 1;

Contact::Contact() {
    this->id = to_string(idCounter);
    idCounter++;
}

string Contact::getId() const {
    return id;
}

void Contact::setId(string id) {
    Contact::id = id;
}

const string &Contact::getFirstName() const {
    return firstName;
}

void Contact::setFirstName(const string &firstName) {
    Contact::firstName = firstName;
}

const string &Contact::getLastName() const {
    return lastName;
}

void Contact::setLastName(const string &secondName) {
    Contact::lastName = secondName;
}

const string &Contact::getPhoneNumber() const {
    return phoneNumber;
}

void Contact::setPhoneNumber(const string &phoneNumber) {
    Contact::phoneNumber = phoneNumber;
}

const string &Contact::getEmailAddress() const {
    return emailAddress;
}

void Contact::setEmailAddress(const string &emailAddress) {
    Contact::emailAddress = emailAddress;
}

