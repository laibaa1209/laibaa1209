#include<stdio.h>
int main() {

    int num, sum=0, i=1,a; 
    printf("enter the number you want to check: ");
    scanf("%d",&num);
    for( i=1;i<=num;i++) {
        if(num%i==0) { 
           a=i;
           sum=sum+a;     
     }
  }
      if(sum==num) { 
         printf("it is a perfect number\n");
      }
     printf("it is not a perfect number");
return 0;
}
