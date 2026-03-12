// Fix the missing destructor
#include <iostream>
using namespace std;

class MyClass {
    int *data;
public:
    MyClass() {
        data = new int[10];
    }
};

int main() {
    MyClass obj;
    return 0;
}
