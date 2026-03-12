// Fix the static member
#include <iostream>
using namespace std;

class Counter {
public:
    static int count;
    Counter() { count++; }
};

int main() {
    Counter c1, c2;
    cout << Counter::count << endl;
    return 0;
}
