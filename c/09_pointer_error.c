// Fix the pointer error
#include <stdio.h>

int main() {
    int *ptr;
    *ptr = 10;
    printf("Value: %d\n", *ptr);
    return 0;
}
