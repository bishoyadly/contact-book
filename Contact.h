
using namespace std;

class Contact {

public:


private:
    static int idCounter;
    string id;
    string firstName;
    string lastName;
    string phoneNumber;
    string emailAddress;

public:

    Contact();

    string getId() const;

    void setId(string id);

    const string &getFirstName() const;

    void setFirstName(const string &firstName);

    const string &getLastName() const;

    void setLastName(const string &secondName);

    const string &getPhoneNumber() const;

    void setPhoneNumber(const string &phoneNumber);

    const string &getEmailAddress() const;

    void setEmailAddress(const string &emailAddress);
};



