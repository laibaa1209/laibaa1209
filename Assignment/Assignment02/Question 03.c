#include <stdio.h>

#define DAYS 5
#define TIMESLOTS 2

int main() {
   
    int availability[DAYS][TIMESLOTS] = {
        {1, 300, 0, 0},    
        {1, 320, 1, 310},   
        {0, 0, 1, 280},   
        {1, 380, 0, 0},   
        {1, 375, 1, 400}    
    };

    printf("Flight Availability Analysis:\n");
    printf("Day Morning Price Evening Price\n");
    for (int i = 0; i < DAYS; i++) {
        printf("%s\t", (i == 0) ? "Monday" : (i == 1) ? "Tuesday" : (i == 2) ? "Wednesd" : (i == 3) ? "Thursdy" : "Friday");
        for (int j = 0; j < TIMESLOTS * 2; j += 2) {
            printf("%s\t%d\t", (availability[i][j] ==  1) ? "Yes" : "No", (availability[i][j] ==  1) ? availability[i][j + 1] :  0);
        }
        printf("\n");
    }

    printf("\n\nBest options for morning flights:\n");
    for (int i = 0; i < DAYS; i++) {
        if (availability[i][0] == 1) {
            printf("%s\n", (i == 0) ? "Monday" : (i == 1) ? "Tuesday" : (i == 2) ? "Wednesday" : (i == 3) ? "Thursday" : "Friday");
        }
    }
    
    printf("\nBest options for evening flights:\n");
    for (int i = 0; i < DAYS; i++) {
        if (availability[i][2] == 1) {
            printf("%s\n", (i == 0) ? "Monday" : (i == 1) ? "Tuesday" : (i == 2) ? "Wednesday" : (i == 3) ? "Thursday" : "Friday");
        }
    }

    printf("\nConfirmation for Thursday:\n");
    printf("Day\tMorning\tMorning Price\tEvening\tEvening Price\n");
    printf("Thursday\t%s\t%d\t%s\t%d\n",
           (availability[3][0] == 1) ? "Yes" : "No", (availability[3][0] == 1) ? availability[3][1] : -1,
           (availability[3][2] == 1) ? "Yes" : "No", (availability[3][2] == 1) ? availability[3][3] : -1);

    return 0;
}