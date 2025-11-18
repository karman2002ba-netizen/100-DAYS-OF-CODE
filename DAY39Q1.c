//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3, cols = 3;
    int min_dim = (rows < cols) ? rows : cols;
    int distinct = 1; 
    
    
    for (int i = 0; i < min_dim; i++) {
        for (int j = i + 1; j < min_dim; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0; 
                break;
            }
        }
        if (distinct == 0) break; 
    }

    if (distinct) {
        printf("Diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are NOT distinct.\n");
    }

    return 0;
}
