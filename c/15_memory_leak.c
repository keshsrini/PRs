// Fix the memory leak
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int) * 5);
    ptr[0] = 10;
    printf("Value: %d\n", ptr[0]);
    return 0;
}
