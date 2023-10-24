#include<stdio.h>

void swapintegers(int num1, int num2)
{
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("num1 after swapping: %d\n",num1);
	printf("num2 after swapping: %d\n",num2);
}
int main(){
	int num1, num2;
	printf("enter num1: ");
	scanf("%d",&num1);
	printf("enter num2: ");
	scanf("%d",&num2);
	swapintegers(num1,num2);
	return 0;
}
