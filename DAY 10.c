//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
int main(){

int a,b,c;
printf("enter side a");
scanf("%d",&a);
printf("enter side b");
scanf("%d",&b);
printf("enter side c");
scanf("%d",&c);
if(a==b && b==c){
    printf("equilateral");
}else if(a==b || b==c || a==c){
    printf("isosceles");
}else{
    printf("scalene");
}

int day;
printf("enter day number");
scanf("%d",&day);
switch(day){
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("invalid day");
}








return 0;
}