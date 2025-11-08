//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n, temp;
    int digit, maxDigit = 0, maxCount = 0, count;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0)
        n = -n; 

    
    for (int i = 0; i <= 9; i++) {
        temp = n;
        count = 0;

       
        while (temp > 0) {
            digit = temp % 10;
            if (digit == i)
                count++;
            temp = temp / 10;
        }

       
        if (count > maxCount) {
            maxCount = count;
            maxDigit = i;
        }
    }

    printf("Most frequent digit = %d (appears %d times)\n", maxDigit, maxCount);
    return 0;
}
