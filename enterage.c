#include <stdio.h>

int main() {
    int age;

    scanf("%d", &age);
    printf("Ur age is %d\n", age);

    if (age > 16) {
        printf("ur a adult\n");
    } else {
        printf("ur a child\n");
    }

    return 0;
}