/**/
#include <iostream>
using namespace std;

class User {
protected:
    string userName;

public:
    void setUser(string name) {
        userName = name;
    }
};

class Cart {
protected:
    int itemCount;

public:
    void setCart(int count) {
        itemCount = count;
    }
};

class Order : public User, public Cart {
public:
    void displayOrder() {
        cout << "User: " << userName << endl;
        cout << "Items in Cart: " << itemCount << endl;
    }
};

int main() {
    Order o;
    o.setUser("Lavanya");
    o.setCart(4);
    o.displayOrder();
    return 0;
}