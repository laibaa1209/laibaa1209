//programmer:Laiba Zia
//date:19th sep 2023
//Question:Famous math’s Square roots can also be used to find the distance between two points in a 2-dimensional or 3-dimensional system for movie or video game production. We have the formula for the distance D between two points (x1, y1) and (x2, y2) in 2 dimensions which is given by: D = √((x2 – x1)2 + (y2 – y1)2)


#include<stdio.h>
#include<math.h>
int main() { //start of main function

     //varaibles declaration and initilization
     int x1,x2,y1,y2,dx,dy;
     float D=0.0;
     
     //asking user to input values
     printf("enter the value of x1:\t"); 
     scanf("%d",&x1);
     printf("enter the value of x2:\t");
     scanf("%d",&x2);
     printf("enter the value of y1:\t");
     scanf("%d",&y1);
     printf("enter the value of y2:\t");
     scanf("%d",&y2);
      //calculatinf the difference
     dx=x2-x1;
     dy=y2-y1;
     //calculating final distance
     D=sqrt((dx*dx)+(dy*dy));
     //outputs the values and Distance between them
     printf("(x1,y1)=(%d,%d)\n",x1,x2);
     printf("(x2,y2)=(%d,%d)\n",y1,y2);
     printf("the distance between given coordinates is:\t%f ",D);
    return 0;
} //end of main function
