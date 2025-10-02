//Write a program to find the LCM of two numbers.
//Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        ++max;
    }

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);


    int number, sum = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    








    return 0;
}