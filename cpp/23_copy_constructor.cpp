// Fix the copy constructor
#include <iostream>
using namespace std;

class MyClass {
    int *data;
public:
    MyClass(int val) {
        data = new int(val);
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    return 0;
}
