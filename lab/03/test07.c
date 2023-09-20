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
if(ans=='+') {   //test conditions
    printf("the sum is:\t%d",op1+op2);
} else if(ans=='-') {
    printf("the difference is:\t%d",op1-op2); //printing the body of test condition if true
} else if (ans=='/') {
    printf("the division is:\t%d",op1/op2);
} else if(ans=='*') {
    printf("the multiplication is:\t%d",op1*op2);
} else {
    printf("choose a different menu option");
}
return 0;
} //end main
     