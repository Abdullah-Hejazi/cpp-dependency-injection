# C++ Dependancy Injection

This is an example of using dependancy injection pattern in C++

The idea is having our controller (test.cpp in this case) having no interaction with the actual service implementation (Payment/CreditCardPayment/PaypalPayment in this case) whatsoever.

Instead, it uses the ServiceContainer to pull the Payment (in which case only the service container will interact and decide which payment to be given to that class).

### Doing so is going to insure that we only change our service (Payment in this case) from 1 location (which is the Container class), leaving our code clean, extendible, and easily maintainable.


