#include<stdio.h>

void processArray(int size, int arr[])
{
	int i,sum=0;
	for(i=0;i<size;i++)
	{   
		sum=sum+arr[i];
	}
	printf("sum: %d\n", sum);
	int max=arr[0];
	for(i=0;i<size;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	printf("maximum: %d\n",max);
	int min=arr[0];
	for(i=0;i<size;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	printf("minimum: %d\n",min);
}
int main(){
	
	int size,i;
	printf("enter the size of array: ");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		printf("enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	processArray(size, arr);
	return 0;
}
