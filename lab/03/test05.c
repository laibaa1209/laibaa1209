//programmer:Laiba Zia
//date:19th sep 2023
//Question:For 4 weeks, Ali volunteered as a helper for swimming classes. The first week, he volunteered for 8 hours. He volunteered for 12 hours in the second week, and another 12 hours in the third week. The fourth week, he volunteered for 9 hours. Using scratch calculate how many hours did he volunteer per week, on average??

#include<stdio.h>
int main() { //start of main function

     //varaibles declaration and initilization
     int w1=8, w2=12, w3=12, w4=9, noOFweeks=4;
     float totalHours=0, avgHours=0;
     totalHours=w1+w2+w3+w4; //calculating total hours he worked
     avgHours=totalHours/noOFweeks; //calculating average of hours
     printf("the avg hours he voluntered per week are: %f",avgHours); //output average hours
    
    return 0;
} //end of main function