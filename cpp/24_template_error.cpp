// Fix the template error
#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << getMax(5, 10.5) << endl;
    return 0;
}
