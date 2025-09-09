#include<stdio.h>

int main(){
    //Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

int a;
printf("enter number a");
scanf("%d",&a);

if(a%2==0){
    printf("even no");
}else{
    printf("odd");
}



int b;
printf("enter number b");
scanf("%d",&b);

if (b >= 0) {
        
        if (b == 0) {
            
            printf("The number is ZERO.\n");
        } else {
            printf("The number is POSITIVE.\n");
        }
    } else {
        printf("The number is NEGATIVE.\n");
    }







    return 0;
}