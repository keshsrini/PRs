// Fix the missing braces
#include <stdio.h>

int main() {
    int x = 10;
    if(x > 5)
        printf("x is greater than 5\n");
        printf("This should be inside if\n");
    return 0;
}
