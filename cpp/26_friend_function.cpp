// Fix the friend function
#include <iostream>
using namespace std;

class Box {
    int width;
public:
    Box(int w) : width(w) {}
    friend void printWidth(Box b);
};

void printWidth(Box b) {
    cout << b.width << endl;
}

int main() {
    Box box(10);
    printWidth(box);
    return 0;
}
