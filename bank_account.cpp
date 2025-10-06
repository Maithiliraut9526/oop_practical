#include<iostream>
using namespace std;

class Account {
private:
    string account_number;
    string holder_name;
    int balance;

public:
    Account(string accNo, string name, int bol = 0) {
        account_number = accNo;
        holder_name = name;
        balance = bol;
    }

    void deposit(int amount) {
        balance += amount;
        cout << "Deposit: " << amount << endl;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdraw: " << amount << endl;
        } else {
            cout << "No balance!" << endl;
        }
    }

    void statement() {
        cout << "\nAccount Statement\n";
        cout << "Account No: " << account_number << endl;
        cout << "Holder Name: " << holder_name << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Saving_Account : public Account {
public:
    Saving_Account(string accNo, string name, int balance = 0):
           Account(accNo, name, balance) {}
};

int main() {
    string accNo, name;
    int initial_balance, amount;

    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter holder name: ";
    cin >> name;
    cout << "Enter initial balance: ";
    cin >> initial_balance;

    Saving_Account c1(accNo, name, initial_balance);

    cout << "Enter amount to deposit in checking account: ";
    cin >> amount;
    c1.deposit(amount);

    cout << "Enter amount to withdraw from checking account: ";
    cin >> amount;
    c1.withdraw(amount);

    c1.statement();

    return 0;
}    