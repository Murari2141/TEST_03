#include <stdio.h>

int main() {
    int rows, col, i, j;
    int matrix[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int largest = matrix[0][0];
    int smallest = matrix[0][0];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
            if (matrix[i][j] < smallest) {
                smallest = matrix[i][j];
            }
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

}
