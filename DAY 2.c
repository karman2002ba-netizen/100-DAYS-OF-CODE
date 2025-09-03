#include<stdio.h>

int main(){

//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

int a;
int b;
int c;


printf("length a");
scanf("%d",&a);

printf("breadth b");
scanf("%d",&b);

c = a*b;

printf("area is %d",c);



int t;
int y;
int u;


printf("length t");
scanf("%d",&t);

printf("breadth y");
scanf("%d",&y);

u = 2*(t+y);

printf("perimeter is %d",u);


float pi =3.14;

float radius;
float area;
float circumference;

printf("Enter the radius of the circle: ");
scanf("%f", &radius);

area = pi*radius*radius;
circumference = 2 * pi * radius;

printf("Area of circle is %f",area);
printf("Area of circle is %f",circumference);












    return 0;
}