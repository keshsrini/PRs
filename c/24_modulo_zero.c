// Fix the modulo by zero
#include <stdio.h>

int main() {
    int a = 10, b = 0;
    int remainder = a % b;
    printf("Remainder: %d\n", remainder);
    return 0;
}
