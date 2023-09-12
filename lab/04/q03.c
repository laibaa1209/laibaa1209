/*
*PROGRAMMER: Laiba Zia
*DATE: 11th sep 2023
*DESCRIPTION: ask user for an input n and ask for n more inputs and prints the sum of it
*/
#include<stdio.h> //header files
int main() { //start of main
    int sum=0,n,i=1, arr[6]={0},in; //variable and array declaration
    printf("enter the value of n:\t"); //asking input from user
    scanf("%d",&n); //reading input
    while(i<n) { //start of while loop
          printf("input in:\t"); //asking for input
          scanf("%d",&in); //reading input
          arr[i]=in; //sets the value in array
          sum=sum+arr[i]; //calculating sum of n numbers
          i=i+1; //incrementing
          } //end of while loop
   
    printf("the sum is:%d",sum); //output sum
    return sum; 
} //end main    