//programmer:Laiba Zia
//date:3rd october 2023
//Question:Write a C program that produces the following output:

/*0  0  0  0

     1  1

  2  2  2  2

     3  3

  4  4  4  4

     5  5

  6  6  6  6     */

#include <stdio.h>

int main() { //start of main
     
     //start of loops to print the above given output
     
    for(int a=1;a<=4;a++) {  
        printf("0");
        printf("\t\t");
    } printf("\n");

    for(int a=1;a<=2;a++) {
        printf("\t\t");
        printf("1");
    } printf("\n");

    for(int a=1;a<=4;a++) {
        printf("2");
        printf("\t\t");
    } printf("\n");

    for(int a=1;a<=2;a++) {
        printf("\t\t");
        printf("3");
    } printf("\n");

     for(int a=1;a<=4;a++) {
        printf("4");
        printf("\t\t");
    } printf("\n");

    for(int a=1;a<=2;a++) {
        printf("\t\t");
        printf("5");
    } printf("\n");

    for(int a=1;a<=4;a++) {
        printf("6");
        printf("\t\t");
    } printf("\n");
    
    //end of loops
    
    return 0;
}
