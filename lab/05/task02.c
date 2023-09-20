//programmer:Laiba Zia
//date:19th sep 2023
//Question: Write a program to see greetings according to time using a 24-hour format. If the time between is 5 to 11 it should greet “Good Morning”, if time is between 12 to 18 it should greet “Good Evening”, if time between 18 to 24 it should greet “Good Night”.
#include<stdio.h>
int main() { //start main
    
    int time;
    printf("what is the time:\t"); //asking input
    scanf("%d", &time); 
    
    //running test conditions 
    
    if(time > 0 && time <=24) {
        if (time >=5 && time <= 11) {
            printf("good morning!");
        }
        else if (time >= 12 && time <= 18) {
            printf("Good evening!");
        }
        else if( time > 18 && time <= 24) {
            printf("Good night!");
        }
        else {
            printf("invalid");
        }
    }
    //end of test conditions
    return 0;
} //end main