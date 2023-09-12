/*
*PROGRAMMER: Laiba Zia
*DATE: 11th sep 2023
*DESCRIPTION:  Print the pattern for any number of n. Below is an example for n=4.
****
****
****
****
*/
#include<stdio.h>
int main() {
    int i,j,n;
    printf("input n:\t");
    scanf("%d",&n);
    i=1;
    while(i<=n) {
        j=1;
        while(j<=n) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}