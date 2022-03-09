#include "iostream"
#include "ContactBook.h"

using namespace std;

int main() {
    system("clear");
    ContactBook contactBook;
    Contact contact;
    contact.setFirstName("tobbey");
    contact.setLastName("william");
    contact.setPhoneNumber("12345");
    contact.setEmailAddress("tobbey@william.com");
    contactBook.addContact(contact);
    cout << "contactBook" << endl;

}