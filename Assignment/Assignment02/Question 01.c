#include <stdio.h>

int main() {
    int batsmen, innings;

    printf("Enter the number of batsmen: ");
    scanf("%d", &batsmen);

    printf("Enter the number of innings per batsman: ");
    scanf("%d", &innings);

    int scores[batsmen][innings];

    for (int i = 0; i < batsmen; ++i) {
        printf("Enter the scores for Batsman %d : ", i + 1);

        for (int j = 0; j < innings; j++) {
            scanf("%d", &scores[i][j]);
        }
    }


    for (int i = 0; i < batsmen; i++) {
        int totalRuns = 0;
        int highestScore = 0;
        int centuries = 0;
        int halfCenturies = 0;

        printf("\nBatsman %d:\n", i + 1);

        for (int j = 0; j < innings; j++) {
            totalRuns += scores[i][j];

            if (scores[i][j] > highestScore) {
                highestScore = scores[i][j];
            }

            if (scores[i][j] >= 100) {
                centuries++;
            } else if (scores[i][j] >= 50) {
                halfCenturies++;
            }
        }

        float averageRuns = totalRuns / innings;

        printf("Total Runs: %d\n", totalRuns);
        printf("Average Runs per Inning: %.2f\n", averageRuns);
        printf("Highest Score in a Single Inning: %d\n", highestScore);
        printf("Number of Centuries: %d\n", centuries);
        printf("Number of Half-Centuries: %d\n", halfCenturies);
    }

    return 0;
}