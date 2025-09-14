#include<stdio.h>

int main(){

int days;
int fine =0;
printf("enter number of late days");
scanf("%d",&days);
if(days<=0){
    printf("no fine");
}else if(days<=5){
    fine = days *2;
    printf("fine is %d",fine);
}else if(days<=10){
    fine = (5*2) + (days-5)*4;
    printf("fine is %d",fine);
}else if(days<=30){
    fine = (5*2) + (5*4) + (days-10)*6;
    printf("fine is %d",fine);
}else{
    printf("library membership cancelled");
}

int units;
int bill;
printf("enter number of units consumed");
scanf("%d",&units);

if(units<=100){
    bill = units * 5;
    printf("bill is %d",bill);
}else if(units<=200){
    bill = (100*5) + (units-100)*7;
    printf("bill is %d",bill);
}else if(units<=300){
    bill = (100*5) + (100*7) + (units-200)*10;
    printf("bill is %d",bill);
}else{
    bill = (100*5) + (100*7) + (100*10) + (units-300)*12;
    printf("bill is %d",bill);
}










    
    return 0;
}