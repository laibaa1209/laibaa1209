#include<stdio.h>

struct date {
	int day;
	int month;
	int year;
};

int main()
{
	struct date data1;
	struct date data2;
	
	printf("Enter the day: ");
	scanf("%d",&data1.day);
	printf("Enter the month: ");
	scanf("%d",&data1.month);
	printf("Enter the year: ");
	scanf("%d",&data1.year);
	
	printf("\n");
	
	printf("Enter the day: ");
	scanf("%d",&data2.day);
	printf("Enter the month: ");
	scanf("%d",&data2.month);
	printf("Enter the year: ");
	scanf("%d",&data2.year);

    if(data1.day==data2.day && data1.month==data2.month && data1.year==data2.year )
    {
    	printf("\n\nDates are equal");
	} else {
		printf("\n\ndates are not equal");
	}
	
	return 0;
}
