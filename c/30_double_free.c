// Fix the double free error
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    free(ptr);
    free(ptr);
    return 0;
}
