//Write a program to swap the first and last digit of a number.
//Write a program to check if a number is a perfect number.
#include<stdio.h>


int main (){

int a;
   printf("enter number a");
   scanf("%d",&a);
   int rem=0;
   int temp;
   
   
   
   while(a >0){
      temp=a%10;
      rem=rem*10 + temp;
      a=a/10;
      
   }
   printf("%d",rem);


   int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num / 2; i++) {  
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is NOT a Perfect Number.\n", num);























    return 0;
}