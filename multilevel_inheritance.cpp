/*

using the concept of multilevel inheritance,
write an oop program that implements:
          a class called personal_account(derived class).
          Inheriting from class personal_details and bank_details

*/

#include <iostream>
#include <string>

using namespace std;

// Base class for personal details
class PersonalDetails {
protected:
    string name;
    int age;
    string address;

public:
    PersonalDetails(string n, int a, string addr) : name(n), age(a), address(addr) {}

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

// Base class for bank details
class BankDetails {
protected:
    string accountNumber;
    double balance;

public:
    BankDetails(string accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived class inheriting from PersonalDetails and BankDetails
class PersonalAccount : public PersonalDetails, public BankDetails {
public:
    PersonalAccount(string n, int a, string addr, string accNum, double bal) 
        : PersonalDetails(n, a, addr), BankDetails(accNum, bal) {}

    void displayPersonalAccountInfo() {
        displayDetails();
        displayAccountInfo();
    }
};

int main() {
    // Creating a personal account object
    PersonalAccount personAccount("John Doe", 30, "123 Main St", "123456789", 5000);

    // Displaying personal account information
    personAccount.displayPersonalAccountInfo();

    return 0;
}
