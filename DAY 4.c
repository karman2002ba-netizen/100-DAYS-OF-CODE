#include<stdio.h>

int main(){
//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/


//Write a program to find and display the sum of the first n natural numbers.
int a;
int b;

printf("enter number a");
scanf("%d",&a);

printf("enter number b");
scanf("%d",&b);

a = a+b;
b= a-b;
a = a-b;

 printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);



    int n , sum;
    printf("the positive integer n ");
    scanf("%d",&n);

    sum = n *(n+1)/2;

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    







    return 0;
}