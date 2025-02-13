#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    char operator;
    scanf("%d %d %c", &num1, &num2, &operator);

    if (operator == '+') {
        printf("%d\n", num1 + num2);
    } else if (operator == '-') {
        printf("%d\n", num1 - num2);
    } else if (operator == '*') {
        printf("%d\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 == 0) {
            printf("error\n");
        } else {
            printf("%d\n", num1 / num2);
        }
    } else {
        printf("Error\n");
    }

    return 0;
}