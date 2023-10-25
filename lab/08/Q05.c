#include <stdio.h>
#include<stdbool.h>

bool decideCarUsuage(int numericpart, int day)
{
	if(numericpart%2==0)
	{
		if(day%2==0)
		{
			return 1;
		}
	} else if(day%2!=0)
		{
			return 0;
		}
}

void main(){
	int numericpart, day;
	printf("enter the numeric part of the car: ");
	scanf("%d",&numericpart);
	printf("enter the day: ");
	scanf("%d",&day);
	printf("%d", decideCarUsuage(numericpart, day));
	
}
