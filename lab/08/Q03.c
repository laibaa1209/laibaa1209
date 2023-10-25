#include<stdio.h>
#include<string.h>

int main(){
	
	char find, str[100];
	int i,count=0;
	puts("Enter the text: ");
	gets(str);
	printf("\n\nenter the character you want to find: ");
	scanf(" %c",&find);
	for(i=0;i<strlen(str);i++)
	{
	
		if(str[i]==find)
		{
		  count++;	
		}
	}
	printf("\n\nthe number of times it occurred is: %d",count);
	return 0;
}
