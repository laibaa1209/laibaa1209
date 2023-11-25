#include <stdio.h>

int main() {
    int N, S;

    printf("Enter size of array N: ");
    scanf("%d", &N);

    int A[N];

    printf("Enter array elements:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter Number S: ");
    scanf("%d", &S);

    int currentSum = A[0];
    int start = 0;

    for (int end = 1; end <= N; end++) {
        while (currentSum > S && start < end - 1) {
            currentSum -= A[start];
            start++;
        }

        if (currentSum == S) {
            printf("The Elements from Index %d to %d when summed results in the output of %d.\n", start, end - 1, S);
            return 0;
        }

        if (end < N) {
            currentSum += A[end];
        }
    }

    printf("No subarray found with sum equal to %d.\n", S);

    return 0;
}