// Fix the missing return
#include <iostream>
using namespace std;

int multiply(int a, int b) {
    int result = a * b;
}

int main() {
    cout << multiply(5, 3) << endl;
    return 0;
}
