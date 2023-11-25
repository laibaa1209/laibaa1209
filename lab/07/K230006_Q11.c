#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;

    printf("Enter size of matrix n: ");
    scanf("%d", &n);

    int grid[MAX_SIZE][MAX_SIZE];
    int maxLocal[MAX_SIZE - 2][MAX_SIZE - 2];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int maxInSubmatrix = grid[i - 1][j - 1];

            for (int row = i - 1; row <= i + 1; row++) {
                for (int col = j - 1; col <= j + 1; col++) {
                    if (grid[row][col] > maxInSubmatrix) {
                        maxInSubmatrix = grid[row][col];
                    }
                }
            }

            maxLocal[i - 1][j - 1] = maxInSubmatrix;
        }
    }

    printf("Generated maxLocal matrix:\n");
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - 2; j++) {
            printf("%d ", maxLocal[i][j]);
        }
        printf("\n");
    }

    return 0;
}