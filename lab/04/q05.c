/*
*PROGRAMMER: Laiba Zia
*DATE: 11th sep 2023
*DESCRIPTION: ask user for DOB or two person and print who is older
*/
#include<stdio.h>
int main() {
    int y1, d1,m1,y2,d2,m2;
    printf("enter the date of first person:\t");
    scanf("%d",&d1);
    printf("enter the month of first person:\t");
    scanf("%d",&m1);
    printf("enter the year of first person:\t");
    scanf("%d",&y1);
    printf("enter the date of second person:\t");
    scanf("%d",&d2);
    printf("enter the month of second person:\t");
    scanf("%d",&m2);
    printf("enter the year of second person:\t");
    scanf("%d",&y2);
    if(y1>=y2) {
        printf("person 2 is older");
    } 
    else(y2>=y1); {
        printf("person 1 is older");
    } 
    return 0;
}//end main