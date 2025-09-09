#include <stdio.h>

int main() {


//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/






    int totalSeconds, hours, minutes, seconds;

     printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

     hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60; 
    seconds = totalSeconds % 60; 

    printf("time is %d",hours);
    
    printf("time is %d",minutes);
    
    printf("time is %d",seconds);















    return 0;
}