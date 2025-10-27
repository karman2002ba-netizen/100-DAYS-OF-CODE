#include <stdio.h>

int main() {
    int rows = 5;   
    int line, star;

   
    for (line = 1; line <= rows; line++) {
        for (star = 1; star <= (2 * line - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (line = rows - 1; line >= 1; line--) {
        for (star = 1; star <= (2 * line - 1); star++) {
            printf("*");
        }
        printf("\n");
    }


    int layers = 4;    
    int row, col, gap;

    
    for (row = 1; row <= layers; row++) {
        for (gap = row; gap < layers; gap++) {
            printf(" ");
        }
        for (col = 1; col <= (2 * row - 1); col++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (row = layers - 1; row >= 1; row--) {
        for (gap = layers; gap > row; gap--) {
            printf(" ");
        }
        for (col = 1; col <= (2 * row - 1); col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
