#include<stdio.h>
#include<string.h>

struct student {
	int roll;
	char name[10];
	char department[10];
	char course[10];
	int year;
};

int main() {
	
	struct student data1;
	struct student data2;
	struct student data3;
	struct student data4;
	struct student data5;
	
	int i;
	printf("Enter the roll numbers");
	
	scanf("%d",&data1.roll);
	scanf("%d",&data2.roll);
	scanf("%d",&data3.roll);
	scanf("%d",&data4.roll);
	scanf("%d",&data5.roll);

	
	puts("\n\nEnter the names");
	
	gets(data1.name);
	gets(data2.name);
	gets(data3.name);
	gets(data4.name);
	gets(data5.name);
	
	
	puts("\n\nEnter the departments");
	
	gets(data1.department);
	gets(data2.department);
	gets(data3.department);
	gets(data4.department);
	gets(data5.department);

	
	puts("\n\nEnter the course");
	
	gets(data1.course);	
	gets(data2.course);	
	gets(data3.course);	
	gets(data4.course);	
	gets(data5.course);	
	
	
	puts("\n\nEnter the year joined");
	
	
	scanf("%d",&data1.year);
	scanf("%d",&data2.year);
	scanf("%d",&data3.year);
	scanf("%d",&data4.year);
	scanf("%d",&data5.year);

	int check;
	printf("\n\nEnter the year you want to check: ");
	scanf("%d",&check);
	if(check==data1.year)
	{
		printf("%s\n", data1.name);
	}
	if(check==data2.year)
	{
		printf("%s\n", data2.name);
	}
	if(check==data3.year)
	{
		printf("%s\n", data3.name);
	}
	if(check==data4.year)
	{
		printf("%s\n", data4.name);
	}
	if(check==data5.year)
	{
		printf("%s\n", data5.name);
	}
	
	
	printf("\n\nEnter the roll num: ");
	scanf("%d",&check);
	
	if(check==data1.roll)
	{
		printf("roll=%d, name= %s, department= %s, course= %s, year %d",data1.roll, data1.name, data1.department, data1.course, data1.year);
	}
	
		if(check==data2.roll)
	{
		printf("roll=%d, name= %s, department= %s, course= %s, year %d",data2.roll, data2.name, data2.department, data2.course, data2.year);
	}
	
		if(check==data3.roll)
	{
		printf("roll=%d, name= %s, department= %s, course= %s, year %d",data3.roll, data3.name, data3.department, data3.course, data3.year);
	}
	
		if(check==data4.roll)
	{
		printf("roll=%d, name= %s, department= %s, course= %s, year %d",data4.roll, data4.name, data4.department, data4.course, data4.year);
	}
	
		if(check==data5.roll)
	{
		printf("roll=%d, name= %s, department= %s, course= %s, year %d",data5.roll, data5.name, data5.department, data5.course, data5.year);
	}
	
	

	return 0;
}
