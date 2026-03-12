// Fix the memory leak
#include <iostream>
using namespace std;

int main() {
    int *ptr = new int[5];
    ptr[0] = 10;
    cout << "Value: " << ptr[0] << endl;
    return 0;
}
