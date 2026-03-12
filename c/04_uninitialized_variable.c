// Fix the uninitialized variable
#include <stdio.h>

int main() {
    int sum;
    sum = sum + 10;
    printf("Sum: %d\n", sum);
    return 0;
}
