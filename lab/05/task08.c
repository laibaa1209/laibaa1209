//programmer:Laiba Zia
//date:19th sep 2023
//Question:An android developer wants to design a mobile feature to control the brightness of the mobile phone according to the surrounding light. In order to do it he uses an ambient light sensor (for the detection of surrounding light) which is commonly built in in all latest android phones. It gives the value of light intensity in integers. Write a C program for Light sensor value ranges from 0-1000, if it's exposed under sunshine (>500), if it's evening then (0 ~ 100), lighting (100 to 500).


#include<stdio.h>
int main() { //start of main function

//varaible declaration 

int lightsensor;
printf("enter the vaue to light sensor between 0-1000\n"); //input value from user
scanf("%d",&lightsensor);

//blocks of test conditions to be carried out if true

if(lightsensor>500) {
    printf("sunshine exposed");
} else if(lightsensor>=0 && lightsensor<=100) {
    printf("it is evening\n");
} else if(lightsensor>100 && lightsensor<=500) {
    printf("it is lightining\n");
} else {
    printf("input an appropriate value\n");
}


return 0;
} //end main
     