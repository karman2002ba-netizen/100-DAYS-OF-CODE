//Write a program to display the month name and number of days using switch-case for a given month number.
//Write a program to find profit or loss percentage given cost price and selling price
#include<stdio.h>

int main() {

int month;
printf("enter month ");
scanf("%d",&month);

switch(month)
{
case 1:
printf("January %d days 31",month);
break; 
case 2:
printf("February %d days 28",month);
break;
case 3:
printf("March %d days 31",month);
break;
case 4:
printf("April %d days 30",month);
break;
case 5:
printf("May %d days 31",month);
break;
case 6:
printf("June %d days 30",month);
break;
case 7:
printf("July %d days 31",month);
break;
case 8:
printf("August %d days 31",month);
break;
case 9:
printf("September %d days 30",month);
break;
case 10:
printf("October %d days 31",month);
break;
case 11:
printf("November %d days 30",month);
break;
case 12:
printf("December %d days 31",month);
break;
printf("invalid month");
}


float cp;
float sp;
printf("enter cost price");
scanf("%f",&cp);
printf("enter selling price");
scanf("%f",&sp);

if(sp>cp){
    float profit=sp-cp;
    float profit_percent=(profit/cp)*100;
    printf("profit percent=%f",profit_percent);
}else if(cp>sp){
    float loss=cp-sp;
    float loss_percent=(loss/cp)*100;
    printf("loss percent=%f",loss_percent);
}else{
    printf("no profit no loss");
}



    return 0;
}