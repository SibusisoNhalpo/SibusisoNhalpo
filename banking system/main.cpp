#include <iostream>
#include <string>
#include <map>

using namespace std;

// To store account information
struct Account {
    string accountNumber;
    string accountUsername;
    double balance;
};

// Map to store all accounts
map<string, Account> accounts;

// To create a new account
void createAccount() {
    Account userAccount;
    cout << "Enter account number: ";
    cin >> userAccount.accountNumber;
    cout << "Enter account Username: ";
    cin.ignore();
    getline(cin, userAccount.accountUsername);
    cout << "Enter initial balance: ";
    cin >> userAccount.balance;

    // Check if account already exists
    if (accounts.find(userAccount.accountNumber) != accounts.end()) {
        cout << "Account already exists!" << endl;
    } else {
        accounts[userAccount.accountNumber] = userAccount;
        cout << "Account created successfully!" << endl;
    }
}

// To deposit money
void deposit() {
    string accountNumber;
    double amount;

    cout << "Enter your account number: ";
    cin >> accountNumber;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    // Check if account exists
    if (accounts.find(accountNumber) == accounts.end()) {
        cout << "Account does not Exist!" << endl;
    } else {
        accounts[accountNumber].balance += amount;
        cout << "Deposit successful! New balance: " << accounts[accountNumber].balance << endl;
    }
}

// To withdraw money
void withdraw() {
    string accountNumber;
    double amount;

    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    // To Check if account exists and if the balance is insufficient
    if (accounts.find(accountNumber) == accounts.end()) {
        cout << "Account not found!" << endl;
    } else if (accounts[accountNumber].balance < amount) {
        cout << "Insufficient balance!" << endl;
    } else {
        accounts[accountNumber].balance -= amount;
        cout << "Withdrawal successful! New balance: " << accounts[accountNumber].balance << endl;
    }
}

// Function to check balance
void checkBalance() {
    string accountNumber;

    cout << "Enter account number: ";
    cin >> accountNumber;

    // Check if account exists
    if (accounts.find(accountNumber) == accounts.end()) {
        cout << "Account not found!" << endl;
    } else {
        cout << "Account balance: " << accounts[accountNumber].balance << endl;
    }
}

//  To display all accounts
void displayAccounts() {
    cout << "List of accounts:" << endl;
    for (auto& account : accounts) {
        cout << "Account Number: " << account.second.accountNumber << endl;
        cout << "Account Username: " << account.second.accountUsername << endl;
        cout << "Balance: " << account.second.balance << endl << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "Banking System Menu:" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Display All Accounts" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                displayAccounts();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice. Please choose again." << endl;
        }

        cout << endl;
    }

    createAccount();
    deposit();
    withdraw();
    checkBalance();
    displayAccounts() ;

    return 0;
}

