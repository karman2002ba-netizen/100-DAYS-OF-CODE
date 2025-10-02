//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
//Write a program to print the following pattern:
/*****
*****
*****
*****
*****/

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    
    printf("Enter number of terms (n): ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        float numerator = 2 * i;
        float denominator = 3 + (i - 1) * 4;
        
        sum += numerator / denominator;
    }
    
    printf("Sum of the series = %.2f\n", sum);



    int i;
    int j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }












    
    return 0;
}