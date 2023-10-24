#include<stdio.h>

void calculateDiscount(int purAmount, int visited)
{
	
	if(visited>10 && purAmount>=50 )
    {
        printf("the discount is of 15%c",37);
	} 
	else if(visited>5 && purAmount>=30)
	{
		printf("the discount is of 10%c",37);
	} 
	else
	{
		printf("No Discount!");
	}
}

int main()
{
	int purAmount, visited;
	printf("Enter the total purchase amount:  ");
	scanf("%d",&purAmount);
	printf("Enter the number of times visited:  ");
	scanf("%d",&visited);
	calculateDiscount(purAmount,visited);
	return 0;
}
