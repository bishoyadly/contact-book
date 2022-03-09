#include<bits/stdc++.h>
#include "Contact.h"
#include "ContactUtils.h"

using namespace std;

string ContactUtils::toLowerCase(string str) {
    string lowerCased = str;
    transform(lowerCased.begin(), lowerCased.end(), lowerCased.begin(), ::tolower);
    return lowerCased;
}

string getContactRow(const Contact &contact) {
    string contactRow = contact.getId() + "," +
                        contact.getFirstName() + "," +
                        contact.getLastName() + "," +
                        contact.getPhoneNumber() + "," +
                        contact.getEmailAddress();
    return contactRow;
}

string getLastLine() {
    ifstream file("../contact-book.txt", ios::app);
    string line;
    while (!file.eof()) {
        getline(file, line);
    }
    return line;
}

void ContactUtils::appendContactToFile(Contact &contact) {
    ofstream file("../contact-book.txt", ios::app);
    if (!getLastLine().empty())
        file << endl;
    string contactRow = getContactRow(contact);
    file << contactRow << endl;
    file.close();
}

vector<string> splitString(string &str) {
    stringstream test(str);
    string segment;
    vector<string> segmentsList;
    while (getline(test, segment, ',')) {
        segmentsList.push_back(segment);
    }
    return segmentsList;
}

Contact parseContactRow(string contactRow) {
    vector<string> arr = splitString(contactRow);
    Contact contact;
    contact.setId(arr[0]);
    contact.setFirstName(arr[1]);
    contact.setLastName(arr[2]);
    contact.setPhoneNumber(arr[3]);
    contact.setEmailAddress(arr[4]);
    return contact;
}

void clearEmtpyLinesFromFile() {
    ifstream input("../contact-book.txt", ios::in);
    string inputLine;
    vector<string> fileLines;
    while (getline(input, inputLine)) {
        if (!inputLine.empty()) {
            fileLines.push_back(inputLine);
        }
    }
    ofstream output("../contact-book.txt");
    for (const string& line: fileLines) {
        output << line << endl;
    }
}

vector<Contact> ContactUtils::readContactsFile() {
    clearEmtpyLinesFromFile();
    ifstream file("../contact-book.txt", ios::in);
    string contactRow;
    vector<Contact> contactList;
    while (!file.eof()) {
        getline(file, contactRow);
        if (contactRow.empty()) {
            continue;
        }
        Contact contact = parseContactRow(contactRow);
        contactList.push_back(contact);
    }
    return contactList;
}