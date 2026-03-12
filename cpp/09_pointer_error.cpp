// Fix the pointer error
#include <iostream>
using namespace std;

int main() {
    int *ptr;
    *ptr = 10;
    cout << "Value: " << *ptr << endl;
    return 0;
}
