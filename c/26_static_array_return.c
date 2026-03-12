// Fix the array return
#include <stdio.h>

int* getArray() {
    int arr[5] = {1, 2, 3, 4, 5};
    return arr;
}

int main() {
    int *ptr = getArray();
    printf("%d\n", ptr[0]);
    return 0;
}
