//Write a program to find the roots of a quadratic equation and categorize them.
//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
//90-100: Grade A
//80-89: Grade B
//70-79: Grade C
//60-69: Grade D
//below 60: Grade F.
#include<stdio.h>
int main(){
    int a,b,c;
    float d;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){
        printf("real and distinct");
    }else if(d==0){
        printf("real and equal");
    }else{
        printf("imaginary");
    }


    int p;
    printf("enter percentage");
    scanf("%d",&p);
    if(p>=90 && p<=100){
        printf("Grade A");
    }else if(p>=80 && p<90){
        printf("Grade B");
    }else if(p>=70 && p<80){
        printf("Grade C");
    }else if(p>=60 && p<70){
        printf("Grade D");
    }else{
        printf("Grade F");
    }
















    return 0;
}