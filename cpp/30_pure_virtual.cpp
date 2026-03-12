// Fix the pure virtual function
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

int main() {
    Shape s;
    s.draw();
    return 0;
}
