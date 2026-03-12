// Fix the operator overload
#include <iostream>
using namespace std;

class Number {
    int val;
public:
    Number(int v) : val(v) {}
    void operator+(Number n) {
        return Number(val + n.val);
    }
};

int main() {
    Number n1(5), n2(3);
    Number n3 = n1 + n2;
    return 0;
}
