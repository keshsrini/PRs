// Fix the dangling pointer
#include <iostream>
using namespace std;

int main() {
    int *ptr = new int(42);
    delete ptr;
    cout << "Value: " << *ptr << endl;
    return 0;
}
