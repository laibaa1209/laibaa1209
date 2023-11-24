#include <stdio.h>

int main() {
    
    int ages[] = {25, 20, 22, 25, 22};
    float prices[] = {30.5, 25.0, 22.5, 30.0, 28.0};
    int n = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ages[j] > ages[j + 1]) {
                // Swap ages
                int tempAge = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = tempAge;

                // Swap prices accordingly
                float tempPrice = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = tempPrice;
            }
        }
    }

    printf("Sorted list in ascending order with respect to Age:\n");
    for (int i = 0; i < n; i++) {
        printf("Age: %d, Price: %.2f\n", ages[i], prices[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ages[j] == ages[j + 1] && prices[j] < prices[j + 1]) {
                // Swap prices
                float tempPrice = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = tempPrice;
            }
        }
    }

    printf("\nSorted list in descending order with respect to Price:\n");
    for (int i = 0; i < n; i++) {
        printf("Age: %d, Price: %.2f\n", ages[i], prices[i]);
    }

    return 0;
}