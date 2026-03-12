// Fix the dangling pointer
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 42;
    free(ptr);
    printf("Value: %d\n", *ptr);
    return 0;
}
