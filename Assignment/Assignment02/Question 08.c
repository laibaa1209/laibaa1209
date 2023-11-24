#include <stdio.h>

int main() {
    int num;

    while (1) {
       
        printf("Enter a positive integer (or EOF to exit): ");
        if (scanf("%d", &num) != 1) {
            break; 
        }

        if (num <= 0) {
            printf("Please enter a positive integer.\n");
            while (getchar() != '\n');
        } else {
            int persistence = 0;

            while (num >= 10) {
                int product = 1;
                while (num > 0) {
                    int digit = num % 10;
                    product *= digit;
                    num /= 10;
                }

                num = product;
                persistence++;
            }

            printf("Persistence of %d is: %d\n", num, persistence);
        }
    }

    printf("Program exited.\n");

    return 0;
}