#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using ternary operator
    int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("Using ternary operator, the largest number is: %d\n", largest);

    // Using if-else if statements
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }
    printf("Using if-else if statements, the largest number is: %d\n", largest);

    // Using nested if statements
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {
        if (num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }
    printf("Using nested if statements, the largest number is: %d\n", largest);

    return 0;
}
