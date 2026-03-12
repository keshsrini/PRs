// Fix the reference error
#include <iostream>
using namespace std;

int& getNumber() {
    int num = 42;
    return num;
}

int main() {
    int x = getNumber();
    cout << x << endl;
    return 0;
}
