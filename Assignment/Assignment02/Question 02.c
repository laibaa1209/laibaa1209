#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Enter the binary matrix (0s and 1s): \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the largest square submatrix of 1s
    int maxSize = 0, maxI = 0, maxJ = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 1) {
                int size = 1;
                int flag = 1;
                while (flag) {
                    for (int k = i; k < i + size; k++) {
                        for (int l = j; l < j + size; l++) {
                            if (k >= rows || l >= cols || matrix[k][l] != 1) {
                                flag = 0;
                                break;
                            }
                        }
                        if (!flag) {
                            break;
                        }
                    }
                    if (flag) {
                        if (size > maxSize) {
                            maxSize = size;
                            maxI = i;
                            maxJ = j;
                        }
                        size++;
                    }
                }
            }
        }
    }

    printf("Largest square submatrix of 1s:\n");
    for (int i = maxI; i < maxI + maxSize; i++) {
        for (int j = maxJ; j < maxJ + maxSize; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Dimensions: %dx%d\n", maxSize, maxSize);

    return 0;
}