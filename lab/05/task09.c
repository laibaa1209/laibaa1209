//programmer:Laiba Zia
//date:19th sep 2023
//Question: Write a C program to find all roots of a quadratic equation, it is required to take user input for a,b and c values. Find discriminant using formula: discriminant=b ×b-(4×a×c). Compute roots based on the nature of discriminant.

#include<stdio.h>
#include<math.h>
int main() { //start main

//initializing the value and declaraing variable

    int a, b, c, discriminant = 0;
    float s1, s2;

//asking user for the input

    printf("enter the value to a:\t\n");
    scanf("%d", &a);
    printf("enter the value to b:\t\n");
    scanf("%d", &b);
    printf("enter the value to c:\t\n");
    scanf("%d", &c);
    
    //calculating discriminant
    
    discriminant=( b * b ) - ( 4 * a * c );
    
    //start of test condition
    
    if(discriminant>0) {
        s1=( - b + (sqrt (discriminant) ) ) / (2 * a);
        s2=( - b - (sqrt (discriminant) ) ) / (2 * a);
    } else if( discriminant < 0) {
        printf("imaginary");
    } else if(discriminant = 0) {
        s1= - b / ( 2 * a );
    } else {
        printf("null");
    }
    //outputs value
    printf("s1:\t%f\n s2:\t%f\n", s1, s2);


    return 0;
} //end man
