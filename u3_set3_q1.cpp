/*1.	A bank manages common account details such as account number, account holder name and balance. From this common account, different account types such as savings account and current account are derived. Design a program to show how multiple account types can share common */
#include <iostream>
using namespace std;

class Product {
protected:
    int productID;
    string name;
    float price;

public:
    void setProductDetails(int id, string n, float p) {
        productID = id;
        name = n;
        price = p;
    }

    void displayProductDetails() {
        cout << "Product ID: " << productID << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

class ElectronicProduct : public Product {
private:
    int warranty;
    
public:
    void setWarranty(int w) {
        warranty = w;
    }
    void displayFullDetails() {
        displayProductDetails();
        cout << "Warranty: " << warranty << " years" << endl;
    }
};

int main() {
    ElectronicProduct e;
    e.setProductDetails(101, "Laptop", 55000);
    e.setWarranty(2);
    e.displayFullDetails();

    return 0;
}