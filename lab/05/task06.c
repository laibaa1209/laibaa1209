//programmer:Laiba Zia
//date:19th sep 2023
//Question: Write a C program to receive an 8-bit number into a variable and then check if its 4th and 7th bits are on. If these bits are found to be on, then put them off
#include<stdio.h>
int main() { //start main
    int num; 
    printf("enter the 8 bit number:"); //input from user
    scanf("%d",&num);
    if(( num / 1000) % 10 >= 1) {  //checking if bits are on
        printf("the 4th bit is on\n");
        num = num - 1000;             //if the bits are on then turning them off
    } if((num / 1000000) % 10 >= 1) {
        printf("the 7th bit is on\n");
        num = num - 1000000;
    }
    printf("the number after turning off the bits: %d", num); //output final modified bit
    
    return 0;
} //end main