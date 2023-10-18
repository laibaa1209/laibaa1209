#include<stdio.h>

int main() {
	

	int rows, column,i,j;
	printf("enter rows: ");
	scanf("%d",&rows);
	printf("enter column: ");
	scanf("%d",&column);
	
	int arr[rows][column];
	
	if(rows!=column) {
		printf("NOT SYMMETRIC!");
		
	} else {
	
	for(i=0;i<rows;i++) 
	{
		for(j=0;j<column;j++)
		{
		   printf("enter elements of row %d column %d: ",i,j);
		   scanf("%d",&arr[i][j]);	
		}
	}
	
	int count=0;
	for(i=0;i<rows;i++) 
	{
		for(j=0;j<column;j++)
		{
		   if(arr[i][j]!=arr[j][i])
		   {
		   	  count++;
		   	  break;
		   }	
		}
	} 
	if(count==0)
	{
		printf("it is a symmetric matrix!\n");
	} else
	   {
		
	printf("Not a symmetric matrix!");
       }
   }
	return 0;
}
