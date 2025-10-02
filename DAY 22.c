//Write a program to check if a number is a strong number
//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; 

    while(temp > 0) {
        digit = temp % 10;   

        
        int fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;   
        temp /= 10;   

    if(sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is NOT a Strong Number.\n", num);
    }




int n;
    float N = 0.0, numerator = 1, denominator = 1;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        N += numerator / denominator;

        
        numerator += 2;

        
        if(i == 1)
            denominator = 4;     
            denominator += 2;   
    }

    printf("Sum of the series = %.2f\n", N);











    return 0;
}