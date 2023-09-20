//programmer:Laiba Zia
//date:19th sep 2023
//Question: Create a calculator asking for operator (+ or – or * or /) and 2 operands and perform calculation according to the user input using switch statement

//programmer:Laiba Zia
//date:19th sep 2023
//Question:Make a simple calculator which performs basic arithmetic operations of mathematics such as addition, subtraction, division and multiplication


#include<stdio.h>
int main() { //start of main function

//varaibles declaration and initilization
char ans;
int op1, op2;
printf("a\t+\nb\t-\nc\t/\nd\t*\n");
printf("choose menu option:\t"); //asking user for operand
scanf(" %c",&ans);
printf("enter op1:\t");          //asking user for operators
scanf("%d",&op1);
printf("enter op2:\t");
scanf("%d",&op2);
switch(ans) {   //starting of switch case
case'+':
    printf("the sum is:\t%d",op1+op2);
    break;
case'-': 
    printf("the difference is:\t%d",op1-op2);
    break;
case'/':
    printf("the division is:\t%d",op1/op2);
    break;
case'*':
    printf("the multiplication is:\t%d",op1*op2);
    break;
default:
    printf("choose a different menu option");
    break;
} //end of switch case
return 0;
} //end main
     