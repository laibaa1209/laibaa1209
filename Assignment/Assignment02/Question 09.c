#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Please enter a positive integer for N.\n");
        return 1;
    }

    int matrix1[N][N];
    int matrix2[N][N];

    int value = 1;
    int startRow = 0, endRow = N - 1, startCol = 0, endCol = N - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // Fill from left to right
        for (int i = startCol; i <= endCol; i++) {
            matrix1[startRow][i] = value;
            matrix2[endRow][i] = value++;
        }
        startRow++;

        // Fill from top to bottom
        for (int i = startRow; i <= endRow; i++) {
            matrix1[i][endCol] = value;
            matrix2[i][startCol] = value++;
        }
        endCol--;

        // Fill from right to left
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                matrix1[endRow][i] = value;
                matrix2[endRow][i] = value++;
            }
            endRow--;
        }

        // Fill from bottom to top
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                matrix1[i][startCol] = value;
                matrix2[i][startCol] = value++;
            }
            startCol++;
        }
    }

    // Print the first matrix
    printf("Matrix 1:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Print the second matrix
    printf("Matrix 2:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}