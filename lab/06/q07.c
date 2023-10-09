//programmer:Laiba Zia
//date:3rd october 2023
//Question:Write a C Program that takes a user input array and prints the sum of its elements.

#include<stdio.h> 
int main() { //start of main
    
    //declaration
    
    int count, sum, arr[9];
    
    //asking user to input elements in array

    printf("enter elements:\n "); 

    //start of for loop

    for ( count = 0 ; count < 9 ; count++) { 

        //reading the value of elements

        scanf("%d",&arr[count]); 

        //new line

        printf("\n");

        //caculating sum

        sum+=arr[count];         
    } 

    //output sum

    printf("sum: %d",sum);       
    
    return 0;
} //end main