#include<stdio.h>
#include<string.h>

int main() 
{   
    int i,count=0;
	char palindrome[100];
	printf("enter the word you want to check: ");
	scanf(" %s",palindrome);
	for(i=0;i<(strlen(palindrome)/2);i++)
	{
		if(palindrome[i]!=palindrome[strlen(palindrome)-i-1])
		  count++;    	
	}
	if(count==0)
	{
		printf("it is a palindrome!\n");
	}
	else 
	{
		printf("it is not a palindrome!");
	}
	return 0;
}
