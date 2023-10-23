#include<stdio.h>

int main() {

	int i,j,num,temp;
	printf("enter total number of elements: ");
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++)
	{
		printf("enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("the elements in ascending order are: ");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
