// Fix the string copy
#include <stdio.h>

int main() {
    char str1[10] = "Hello";
    char str2[10];
    str2 = str1;
    printf("%s\n", str2);
    return 0;
}
