/*
programmer: Laiba Bint-e-Zia
date:october 31st 2023
description: swap the value of int using pointers
*/
/*
Answer A: A new variable temp is used 
		  in the function, while the work is being done 
		  on the variable "a". the value of variable b 
		  was given to "a" and then again value of variable
		  "a" was given to variable "B".
*/
#include<stdio.h>

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	
	int j=2,k=5;
	printf("j=%d,k=%d\n",j,k);
	swap(&j,&k);
	printf("j=%d,k=%d",j,k);
	return 0;
}
