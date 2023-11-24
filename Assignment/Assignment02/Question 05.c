#include <stdio.h>
#include <math.h>

int main() {
    int limit;
    printf("Enter the limit (n^3): ");
    scanf("%d", &limit);

    int count = 0;

    printf("Ramanujan-Hardy numbers less than %d^3:\n", limit);

    for (int i = 1; i <= limit; i++) {
        for (int j = i + 1; j <= limit; j++) {
            int cubeSum1 = pow(i, 3) + pow(j, 3);

            for (int k = i; k <= limit; k++) {
                for (int l = k + 1; l <= limit; l++) {
                    int cubeSum2 = pow(k, 3) + pow(l, 3);

                    if (cubeSum1 == cubeSum2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", cubeSum1, i, j, k, l);
                        count++;
                    }
                }
            }
        }
    }

    if (count == 0) {
        printf("No Ramanujan-Hardy numbers found.\n");
    }

    return 0;
}