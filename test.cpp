#include "Container.cpp"


void performPayment(int x, ServiceContainer) {
    container->getPayment()->Pay();
}

int main() {
    performPayment(5);    
}
