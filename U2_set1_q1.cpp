/*Q1 – Constructor Overloading
A bank allows account creation in two ways:
•	Creating an account without an initial balance.
•	Creating an account with an initial balance.
Write a C++ program to implement a class Account that demonstrates constructor overloading to support both types of account creation. Display the account balance for each account.
________________________________________
*/
#include <iostream>
using namespace std;

class Account {
    float balance;

public:
    Account() {
        balance = 0;
    }

    Account(float b) {
        balance = b;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a1;
    Account a2(5000);

    a1.display();
    a2.display();

    return 0;
}