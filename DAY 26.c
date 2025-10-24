#include <stdio.h>

int main() {
   int i;
   int j;
   int k;
   for(i=5; i>=1; i--){
       for(j=1; j<i; j++){
           printf(" ");
       }
       for(k=i; k<=5; k++){
           printf("%d",k);
       }
       printf("\n");
   }
   
   
    printf("*\n\n");
    
    
    for (int u = 0; u < 5; u++) {
        printf("*\n");
    }
    printf("\n");
    
   
    for (int y = 0; y < 3; y++) {
        printf("*\n");
    }
    printf("\n");
    
   
    printf("*\n");

    return 0;
}