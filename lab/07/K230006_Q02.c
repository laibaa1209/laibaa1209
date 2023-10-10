/*//programmer:Laiba Zia
//date:10th october 2023
//Question:Given an array of integers of size N and an integer “d”, the task is to rotate the array elements to the
left by d positions. Note: Solve the question without declaring another array. (The input array itself
must be modified). */

#include<stdio.h>

int main() {
	
	int count, d,n;
	 printf ("enter d: ");
	scanf ("%d",&d);
	printf ("\nenter the length of array: ");
	scanf ("%d",&n);
	int arr[n];
	printf ("\nenter elements: ");
	
    for ( count = 0 ; count < n ; count++ )	{
    	scanf("%d",&arr[count]);	
	}
	
	 for ( count = 0 ; count < n-d ; count++) {
	 	arr[count]+=d;
	 	printf ("%d",arr[count]);
    } 
	printf("12");
	return 0;
}
