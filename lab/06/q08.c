//programmer:Laiba Zia
//date:3rd october 2023
//Question:Write a program in C to read n number of values in an array and display it in reverse order.

#include<stdio.h> 
int main() { //start of main
    
    //declaration
    
    int count, arr[9];
    
    //asking user to input elements in array

    printf("enter elements:\n "); 

    //start of for loop

    for ( count = 0 ; count < 9 ; count++) { 

        //reading the value of elements

        scanf( "%d", &arr[ count ] ); 

        //new line

        printf("\n");
                 
    } //end of loop

    //start of another for loop
     
     for( count = 0 ; count < 9; count++ ) {
         
         //output value in reverse order
         
         printf("%d" , arr[ 8 - count ]);

     } //end of loop
    
    return 0;

} //end main