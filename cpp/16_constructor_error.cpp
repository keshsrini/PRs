// Fix the constructor
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
};

int main() {
    Rectangle rect;
    return 0;
}
