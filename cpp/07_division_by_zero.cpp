// Fix the division by zero
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;
    if (b == 0) {
    	cout << "ZERO DIVISON ERROR" << endl;
    	return 0;
    }
    int result = a / b;
    cout << "Result: " << result << endl;
    return 0;
}
