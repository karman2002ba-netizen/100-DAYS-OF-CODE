#include<stdio.h>

int main(){

//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

int a;
int b;
int c;

printf("enter number a");
scanf("%d" ,&a);

printf("enter number b");
scanf("%d" ,&b);

c=a+b;

printf("sum is %d",c);


int q;
int w;
int e;

printf("enter number q");
scanf("%d" ,&q);

printf("enter number w");
scanf("%d" ,&w);

e=q*w;

printf("sum is %d",e);\



int y;
int u;
int i;

printf("enter number y");
scanf("%d" ,&y);

printf("enter number u");
scanf("%d" ,&u);

i=y/u;

printf("sum is %d",i);



int g;
int h;
int k;

printf("enter number g");
scanf("%d" ,&g);

printf("enter number h");
scanf("%d" ,&h);

k=g-h;

printf("sum is %d",k);















    return 0;
}