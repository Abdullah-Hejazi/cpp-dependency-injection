#include "Main.cpp"

#define ServiceContainer Container* container = new Container()

class Container {
    public:
        Payment* getPayment() {
            return new CreditCardPayment();
        }
};