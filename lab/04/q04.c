/*
*PROGRAMMER: Laiba Zia
*DATE: 11th sep 2023
*DESCRIPTION: to perform quadratic formula on the input numbers
*/
#include<stdio.h>//header files
#include<math.h>
int main() { //start of main
    int a,b,c, calculate=0; //header files
    float s1=0,s2=0;
    printf("enter value to a:\t"); //asking input from user
    scanf("%d",&a);
    printf("enter value to b:\t");
    scanf("%d",&b);
    printf("enter value to c:\t");
    scanf("%d",&b);
    calculate=(b*b)-(4*a*c); //calculating 
    if(calculate>0) { //if condition start
        s1=(-b+sqrt(calculate))/(2*a); 
        s2=(-b-sqrt(calculate))/(2*a);
        printf("s1:%f",s1); //print s1 and s2
        printf("s2:%f",s2);
    } //end of condition
    else if(calculate<0) {  //start of else if condition
        printf("imaginary",s1,s2); //print s1 and s2
    } //end of if condition
    return s1,s2;
    
} //end main    