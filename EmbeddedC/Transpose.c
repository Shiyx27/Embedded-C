#include <stdio.h>


void main() {
    char register_number[] = "21BEC1834"; 
    char matrix[4][4];
    int i,j;
    // Populate matrix based on register number
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; ++j) {
            matrix[i][j] = register_number[(i + j) % 8]; // Using % 8 to cycle through the register number
        }
    }
    
    // Display original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Transpose matrix
    printf("\nTranspose Matrix:\n");
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("%c ", matrix[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}

