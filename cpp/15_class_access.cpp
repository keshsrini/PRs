// Fix the class member access
#include <iostream>
using namespace std;

class Person {
    string name;
public:
    void setName(string n) { name = n; }
};

int main() {
    Person p;
    p.name = "Alice";
    return 0;
}
