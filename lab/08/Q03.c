#include<stdio.h>
#include<string.h>

int main(){
	
	char str[100];
	int i,count=0;
	puts("Enter the text: \n");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
	
		if(str[i]=='a')
		{
		  count++;	
		}
	}
	printf("\n\nthe number of times it occurred is: %d",count);
	return 0;
}
