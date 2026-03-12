// Fix the namespace error
#include <iostream>

namespace MyNamespace {
    int value = 100;
}

int main() {
    std::cout << value << std::endl;
    return 0;
}
