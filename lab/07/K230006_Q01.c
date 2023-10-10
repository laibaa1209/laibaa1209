#include<stdio.h> 

int main() {

    int q=0,r=0, num1, num2;
    printf("enter num1: ");
    scanf("%d",&num1);
    printf("enter num2: ");
    scanf("%d",&num2);
    if(num2==0) {
       printf("INVALID INPUT");
     } for(; num1>=num2 ;) {
       num1=num1-num2;
       q=q+1; 
       }
       r=num1;
 
         printf("the quotient is: %d\n",q);
         printf("the remainder is: %d", r);
return 0;
}
