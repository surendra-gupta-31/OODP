#include <iostream>
using namespace std;

class Delivery {
public:
    virtual void deliver() {
        cout << "Delivery in general" << endl;
    }
};

class ExpressDelivery : public Delivery {
public:
    void deliver() override {
        cout << "Express Delivery within 1 day" << endl;
    }
};

class StandardDelivery : public Delivery {
public:
    void deliver() override {
        cout << "Standard Delivery within 3 days" << endl;
    }
};

int main() {
    Delivery* d;  
    ExpressDelivery e;
    StandardDelivery s;
    d = &e;
    d->deliver();  
    d = &s;
    d->deliver();  
    return 0;
}