#include <iostream>

class Payment {
    public:
        virtual void Pay() {}
};

class PaypalPayment : public Payment {
    public:
        void Pay() {
            std::cout << "Paid with paypal !";
        }
};

class CreditCardPayment : public Payment {
    public:
        void Pay() {
            std::cout << "Paid with credit !";
        }
};