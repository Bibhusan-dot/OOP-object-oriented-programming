#include <iostream>
using namespace std;

class Bank {
private:
    string name;
    int accountNumber;
    float balance;

    static int operationCount;

public:
    Bank(string n = "", int acc = 0, float bal = 0.0) {
        name = n;
        accountNumber = acc;
        balance = bal;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful.\n";
            operationCount++;
        } else {
            cout << "Invalid amount.\n";
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
            operationCount++;
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    void displayBalance() const {
        cout << "Account Holder: " << name << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Balance: Rs. " << balance << "\n";
        operationCount++;
    }

    static void displayTotalOperations() {
        cout << "Total operations performed: " << operationCount << "\n";
    }

    int getAccountNumber() const {
        return accountNumber;
    }
};

int Bank::operationCount = 0;

int main() {
    Bank users[3] = {
        Bank("Shishir", 101, 1000.0),
        Bank("Ram", 102, 2000.0),
        Bank("Sita", 103, 1500.0)
    };

    int choice, accNum;
    float amount;
    bool found;
    Bank* currentUser;

    while (true) {
        cout << "\n====== Banking Menu ======\n";
        cout << "1. Deposit\n2. Withdraw\n3. Display Balance\n4. Display Total Operations\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting application...\n";
            break;
        }

        if (choice >= 1 && choice <= 3) {
            cout << "Enter account number: ";
            cin >> accNum;
            found = false;
            for (int i = 0; i < 3; i++) {
                if (users[i].getAccountNumber() == accNum) {
                    currentUser = &users[i];
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Account not found.\n";
                continue;
            }
        }

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                currentUser->deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                currentUser->withdraw(amount);
                break;

            case 3:
                currentUser->displayBalance();
                break;

            case 4:
                Bank::displayTotalOperations();
                break;

            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}
