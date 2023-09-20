//programmer:Laiba Zia
//date:19th sep 2023
//Question:Write a C program to input a character from the user and check whether the given character is a small alphabet, capital alphabet, digit or special character, using if else

#include<stdio.h>
int main() { //start of main
    char c;
    printf("enter the character:\t");                  
    scanf("%c",&c);
    
    //starting of test conditions
    
    if(c>=97&&c<=122) {                               //start test condition one
        printf("it is a lower case letter\n");        //body to be executed, if true
    }                                                 //end of condition
    else if (c>=65&&c<=90) {
        printf("it is an upper case letter\n");
    }
    else if(c>=48&&c<=57) {
        printf("it is a digit\n");
    }
    else if((c>=0&&c<=47) || (c>=58&&c<=64) || (c>=91&&c<=96) || (c>=123&&c<=126)) {
        printf("it is a speical character\n");
    }
    else {
        printf("give a different option\n");
    }
    return 0;
    
} //end main