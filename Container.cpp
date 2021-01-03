#include "Main.cpp"

class Container {
    public:
        Payment* getPayment() {
            return new CreditCardPayment();
        }
};