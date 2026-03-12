// Fix the increment operator
#include <stdio.h>

int main() {
    int x = 5;
    x =+ 1;
    printf("x = %d\n", x);
    return 0;
}
