#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
    public:
        BankAccount(string holder, string IBAN, double balance = 0) :
            holder_(holder), IBAN_(IBAN), balance_(balance) {}
        
        double get_balance() { return balance_; }
        string get_holder() { return holder_; }
        string get_IBAN() { return IBAN_; }
    private:
        double balance_;
        string holder_;
        string IBAN_;
};

class Bank {
    public:
        void add_account(BankAccount& account) { accounts_.push_back(account); }
        void balance_statistics() {
            int positive_count = 0;
            int negative_count = 0;
            for (auto& account : accounts_) {
                if (account.get_balance() > 0) {
                    positive_count++;
                } else {
                    negative_count++;
                }
            }
            cout << "Positive balance accounts: " << positive_count << ", Negative or zero balance accounts: " << negative_count << endl;
        }
    private:
        vector<BankAccount> accounts_;
};

int main() {
    Bank bank;

    BankAccount account1("John Doe", "123456", 500);
    BankAccount account2("Jane Smith", "789012", -100);
    BankAccount account3("Bob Johnson", "345678", 0);

    bank.add_account(account1);
    bank.add_account(account2);
    bank.add_account(account3);

    bank.balance_statistics();
    return 0;
}
