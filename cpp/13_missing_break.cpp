// Fix the missing break
#include <iostream>
using namespace std;

int main() {
    int choice = 1;
    switch(choice) {
        case 1:
            cout << "One" << endl;
        case 2:
            cout << "Two" << endl;
        default:
            cout << "Other" << endl;
    }
    return 0;
}
