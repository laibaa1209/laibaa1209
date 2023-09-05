#include<stdio.h>
#include<math.h>
int main() {
        int base,perp; 
        float hyp=0;
           printf("enter the base");
           scanf("%d",&base);
           printf("enter perpendicular:");
           scanf("%d",&perp);
           hyp=sqrt((pow(base,2))+(pow(perp,2)));
           printf("the hypotenuse is:%f",hyp);
           return hyp;
}

