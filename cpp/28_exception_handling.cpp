// Fix the exception handling
#include <iostream>
using namespace std;

int main() {
    try {
        throw 20;
    }
    catch(int e) {
        cout << "Exception: " << e << endl;
    }
    finally {
        cout << "Finally block" << endl;
    }
    return 0;
}
