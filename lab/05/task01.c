//programmer:Laiba Zia
//date:19th sep 2023
//Question: Write a C program to check whether a number is multiple of 3 or not. If it is then print “This number is multiple of 3”, otherwise print “This number is not multiple of 3”.
#include<stdio.h>
int main() { //start main

    int num;
    printf("enter the number you want to check:\t "); //asking user for input
    scanf("%d", &num);
    if(num%3==0) {     //test condition to check wether it is a multiple of 3 or not
        printf("the number is multiple of 3\n"); //outputs answer
    } //end of condition
    else {
        printf("the number is not multiple of 3\n");
    } 
   
    
    return 0;
} //end main