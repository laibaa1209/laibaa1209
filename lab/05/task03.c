//programmer:Laiba Zia
//date:19th sep 2023
//Question:You must have seen the question before deleting anything like “Are you sure to delete [Y/y] / [N/n] ? Create a program that asks for this question if user enters Y or y it prints “Deleted successfully” if the user enters N or n it prints “Delete canceled” otherwise it prints choose the right option using switch statement.

#include<stdio.h>
int main() { //start of main function
    
    char q;    //declaring variable
    printf("Are you sure you want to delete [y/Y]/[n/N]? : \t"); //asking user for inut
    scanf(" %c", &q);
    switch(q) {    //start of switch cases
        case 'y':
        printf("Deleted successfully\n");
        break;
        case 'Y':
        printf("Deleted successfully\n");
        break;
        case 'n':
        printf("Delete canceled");     //body of switch
        break;
        case 'N':
        printf("Delete canceled");
        break;
        default:
        printf("Invalid option");
    } //end os switch case
    return 0;
} //end of main