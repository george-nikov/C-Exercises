#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TelephoneContact {
    public:
        TelephoneContact(string name, string phone_number, string workplace) :
            name_(name), phone_number_(phone_number), workplace_(workplace) {}

        string get_name() { return name_; }
        string get_phone_number() { return phone_number_; }
        string get_workplace() { return workplace_; }

    private:
        string name_;
        string phone_number_;
        string workplace_;
};

class Phonebook {
    public:
        void add_contact(TelephoneContact& contact) { contacts_.push_back(contact); }

        bool has_contact(string name) {
            for (auto& contact : contacts_) {
                if (contact.get_name() == name) {
                    return true;
                }
            }
            return false;
        }

    private:
        vector<TelephoneContact> contacts_;
};

int main() {
    Phonebook phonebook;

    TelephoneContact contact1("John Doe", "555-555-5555", "Acme Inc.");
    TelephoneContact contact2("Jane Smith", "555-555-5556", "XYZ Corp.");
    TelephoneContact contact3("Bob Johnson", "555-555-5557", "ABC Inc.");

    phonebook.add_contact(contact1);
    phonebook.add_contact(contact2);
    phonebook.add_contact(contact3);

    cout << "Does the phonebook have a contact named 'John Doe'? ";
    if (phonebook.has_contact("John Doe")) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    cout << "Does the phonebook have a contact named 'John Smith'? ";
    if (phonebook.has_contact("John Smith")) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
