/*2.	A home loan is a specialized form of loan account, and a loan account itself is a specialized form of a general account. Design a three-level hierarchy to model account, loan account and home loan, and write a program to calculate a simple EMI for a home loan customer.*/
#include <iostream>
using namespace std;

class Product {
protected:
    string name;
    float price;

public:
    void setDetails(string n, float p) {
        name = n;
        price = p;
    }
};

class Clothing : public Product {
public:
    void display() {
        cout << "Clothing: " << name << ", Price: " << price << endl;
    }
};

class Electronics : public Product {
public:
    void display() {
        cout << "Electronics: " << name << ", Price: " << price << endl;
    }
};

class Grocery : public Product {
public:
    void display() {
        cout << "Grocery: " << name << ", Price: " << price << endl;
    }
};

int main() {
    Clothing c;
    Electronics e;
    Grocery g;
    c.setDetails("Shirt", 1200);
    e.setDetails("Mobile", 18000);
    g.setDetails("Rice", 60);
    c.display();
    e.display();
    g.display();

    return 0;
}