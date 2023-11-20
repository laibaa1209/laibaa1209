#include <stdio.h>

long int factorial(int N) {
    if (N == 0) {
        return 1;
    } else {
        return N * factorial(N - 1);
    }
}

int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    long long int result = factorial(N);
    printf("Factorial of %d is: %ld\n", N, result);

    return 0;
}