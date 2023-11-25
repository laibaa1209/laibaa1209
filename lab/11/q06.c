#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date currentDate;
    printf("Enter the current date (day month year): ");
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);

    currentDate.day += 45;

    while (currentDate.day > 31) {
        currentDate.day -= 31;
        currentDate.month++;

        if (currentDate.month > 12) {
            currentDate.month = 1;
            currentDate.year++;
        }
    }

    printf("Final date after adding 45 days: %d/%d/%d\n", currentDate.day, currentDate.month, currentDate.year);

    return 0;
}