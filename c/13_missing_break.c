// Fix the missing break statement
#include <stdio.h>

int main() {
    int choice = 1;
    switch(choice) {
        case 1:
            printf("One\n");
        case 2:
            printf("Two\n");
        default:
            printf("Other\n");
    }
    return 0;
}
