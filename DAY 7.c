#include<stdio.h>

int main(){

int year;

printf("enter year");
scanf("%d",&year);

if(year % 4 ==0){
    printf("leap year");
}else{
    printf("not leap year");
}

//Write a program to input a character and check whether it is a vowel or consonant using if–else.
int n;

printf("enter number n");
scanf("%d",&n);
if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
    printf("vowel");
}else{
    printf("consonant");
}






    return 0;
}