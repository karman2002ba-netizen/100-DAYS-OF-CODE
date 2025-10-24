#include <stdio.h>

int main() {
   int i;
   int j;
   for (i = 5; i >= 1; i--) {      
        for (j = i; j <= 5; j++) {  
            printf("%d", j);
        }
        printf("\n");  }
        
        
        
        int a, b;
    for (a = 0; a < 5; a++) {            
        for (b = 0; b < a; b++) {        
            printf(" ");
        }
        for (b = a; b < 5; b++) {         
            printf("*");
        }
        printf("\n");                     
    }

    return 0;
}