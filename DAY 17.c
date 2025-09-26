#include <stdio.h>

int main() {
    int n, temp, rem, sum = 0;
    int digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp > 0) {
        rem = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power = power * rem;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.\n", n);











int a, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a Prime number.\n", a);
    else
        printf("%d is NOT a Prime number.\n", a);

    return 0;
}











