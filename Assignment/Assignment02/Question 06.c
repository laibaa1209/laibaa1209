#include <stdio.h>

int main() {
    int N, t;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    // Input the elements of the array
    int arr[N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target integer
    printf("Enter the target integer (t): ");
    scanf("%d", &t);

    printf("Pairs with sum equal to %d:\n", t);

    // Check for pairs with the given sum
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == t) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}