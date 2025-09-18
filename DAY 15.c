//Write a program to calculate the factorial of a number.
//Write a program to reverse a given number.



#include<stdio.h>



int main(){

int fact = 1;
int n;
printf("enter number");
scanf("%d",&n);

for(int i=1; i<=n; i++){
    fact = fact*i;
}
printf("%d \n",fact);


int num;
int rev = 0;
int rem;
printf("enter number");
scanf("%d",&num);

while(num != 0){
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
}

printf("enter number %d",rev);


















    
    return 0;
}
