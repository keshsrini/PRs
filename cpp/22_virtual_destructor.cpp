// Fix the virtual destructor
#include <iostream>
using namespace std;

class Base {
public:
    ~Base() { cout << "Base destructor" << endl; }
};

class Derived : public Base {
public:
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main() {
    Base *ptr = new Derived();
    delete ptr;
    return 0;
}
