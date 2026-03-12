// Fix the logical operator
#include <stdio.h>

int main() {
    int x = 5, y = 10;
    if(x > 0 & y > 0) {
        printf("Both positive\n");
    }
    return 0;
}
