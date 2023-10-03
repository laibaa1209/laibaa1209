//programmer:Laiba Zia
//date:3rd october 2023
//Question: Write a C Program that takes any number from the user and identifies if the number is a perfect number or not.
#include<stdio.h>
int main() { //start of main

    int num, sum=0, i=1,a;  //initialzing 
    printf("enter the number you want to check: "); //asking the                           user to input the num to check
    scanf("%d",&num);
    for( i=1;i<num;i++) { //begin of for loop
        if(num%i==0) { //test condition to see if remainder is equal             0 or not
           a=i; //giving value of i to variable a
           sum=sum+a;    //taking the sum of factors 
     }
  } //end of foor loop
      if(sum==num) {  //test condition to check wether sum is equal to num or not
         printf("it is a perfect number\n"); //output
      } else {
     printf("it is not a perfect number");
      } 
return 0;
} //end main
