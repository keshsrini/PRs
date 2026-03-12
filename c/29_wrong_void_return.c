// Fix the void function return
#include <stdio.h>

void printMessage() {
    printf("Hello\n");
    return 0;
}

int main() {
    printMessage();
    return 0;
}
