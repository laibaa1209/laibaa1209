//programmer:Laiba Zia
//date:19th sep 2023
//Question: Write a program to receive an 8-bit number into a variable and then exchange its higher four bits with the lower four bits if the entered number includes at least two digits.
#include<stdio.h>
int main() { //start main
    int num, i, j; 
    printf("enter the 8 bit number:"); //input from user
    scanf("%d",&num);
    i=num%10000;
    j=num/10000;
    num=(i*10000)+j;
    printf("%d",num);
    return 0;
} //end main