//Write a program to print the product of even numbers from 1 to n.
//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>


int main(){
int sum;
int i;
int n;
printf("enter n");
scanf("%d",&n);

for(i=1;i<=n;i++){
    sum = sum + i;

}
printf("%d",sum);

int product =1;
int j;
int g;
printf("enter g");
scanf("%d",&g);

for(j=1;j<=g;j++){
    product = product * j;
}
printf("%d",product);





    return 0;
}