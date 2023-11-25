#include <stdio.h>

void printSpaces(int count) {
    for (int i = 0; i < count; i++) {
        printf(" ");
    }
}

void printStars(int count) {
    for (int i = 0; i < count; i++) {
        printf("*");
    }
}

void printNewline() {
    printf("\n");
}

void printRobotPart(int n, int spaces, int stars, int newline) {
    printSpaces(spaces);
    printStars(stars);
    if (newline) {
        printNewline();
    }
}

void printHat(int n) {
    for (int i = 0; i < n - 2; i++) {
        printRobotPart(n, n - 1, n, 1);
    }

    printSpaces(1);
    printStars(3 * n - 4);
    printNewline();
}

void printFace(int n) {
    for (int i = 0; i < 3; i++) {
        switch(i) {
            case 0:
                printSpaces(n - 1);
                printStars(1);
                printSpaces(n - 2);
                printStars(1);
                break;
            case 1:
                printSpaces((3 * n - 4) / 2);
                printf("|");
                break;
            case 2:
                printSpaces((3 * n - 4) / 2);
                printf("\\_/");
                break;
        }
        printNewline();
    }

    printNewline();
}

void printNeck(int n) {
    printSpaces((3 * n - 4) / 2);
    printStars(1);
    printStars(1);
    printNewline();
}

void printTorso(int n) {
    printStars(3 * n - 2);
    printNewline();

    for (int i = 1; i < n; i++) {
        printStars(n / 2);
        printSpaces(n / 2);
        printStars(n);
        printSpaces(n / 2);
        printStars(n / 2);
        printNewline();
    }
}

void printLegs(int n) {
    printSpaces(1);
    printStars(n);
    printNewline();

    for (int i = 0; i < (3 * n - 4) / 2; i++) {
        printSpaces(n - 1);
        printStars(n / 2);
        printf(" ");
        printStars(n / 2);
        printNewline();
    }
}

void printShoes(int n) {
    printSpaces(n / 2);
    printStars(n);
    printf(" ");
    printStars(n);
    printNewline();
}

void printRobot(int n) {
    printHat(n);
    printFace(n);
    printNeck(n);
    printTorso(n);
    printLegs(n);
    printShoes(n);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printRobot(n);

    return 0;
}
