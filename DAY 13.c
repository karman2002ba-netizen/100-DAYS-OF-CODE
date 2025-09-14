//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
//Write a program to print numbers from 1 to n.

#include<stdio.h>

int main(){

int num1,num2;
char op;
printf("enter number ");
scanf("%d",&num1);
printf("enter number 2 ");
scanf("%d",&num2);
printf("enter operator ");
scanf(" %c",&op);

if(op== '+' ){
    printf("the sum is %d",num1+num2);
}
else if(op=='-')
{
    printf("the difference is %d",num1-num2);
}
else if(op=='*')
{
    printf("the product is %d",num1*num2);
}
else if(op=='/')
{
    printf("the quotient is %d",num1/num2);
}
else if(op=='%')
{
    printf("the remainder is %d",num1%num2);
}
else
{
    printf("invalid operator");
}


int i,n;
printf("enter n");
scanf("%d",&n);

for(i=1;i<=n;i++){
    printf("%d\n",i);

}






    
    return 0;
}