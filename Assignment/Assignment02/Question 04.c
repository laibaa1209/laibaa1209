#include <stdio.h>

#define N 5
#define M 5

int main() {
    char maze[N][M] = {
        {'S', 'O', 'O', 'W', 'W'},
        {'O', 'W', 'O', 'O', 'W'},
        {'O', 'O', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'E', 'W'}
    };
    
    printf("THE ORIGINAL MAZE\n\n");
    int i, j ;
    for(i = 0; i < N; i++) {
        
        for(j = 0; j < M; j++)
        {
            printf(" %c", maze[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    
    int x = 0, y = 0; 
    printf("\n\nPath from Starting Point to Exit:\n");

    while (x != N - 1 || y != M - 1) {
        printf("%d,%d ", x, y);
        
        if (y + 1 < M && maze[x][y + 1] == 'O') {
            y = y + 1; // Move right
        } else if (x + 1 < N && maze[x + 1][y] == 'O') {
            x = x + 1; 
        } else {
            printf("\nNo valid move. Exiting.\n");
            return 0;
        }
    }
    
    printf("%d,%d\n", x, y); 

    return 0;
}
