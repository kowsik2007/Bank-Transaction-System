
#include <iostream>
using namespace std;

class Bank {
private:
    int accountNumber;
    string name;
    double balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount Deposited Successfully\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient Balance\n";
        } else {
            balance -= amount;
            cout << "Withdrawal Successful\n";
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank b;
    int choice;

    b.createAccount();

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: b.deposit(); break;
            case 2: b.withdraw(); break;
            case 3: b.display(); break;
        }
    } while(choice != 4);

    return 0;
}
