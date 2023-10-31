/* programmer: Laiba Bint-e-Zia
   date: october 31st 2023
   description: to print the reverse of an array using function and pointers
   */
   #include<stdio.h>
   void reverse(int*arr, int size)
   {
   	int *first=arr;
	int *last=arr+size-1;
   	while(first<last)
   	{
   		int temp= *first;
   		*first=*last;
   		*last=temp;
   		first++;
		last--;
	}
   }
   int main() 
   {
   	   int count, arr[10];
   	   printf("enter the values of arr: ");
   	    for(count=0;count<10;count++)
   	   {
   	    scanf("%d ",&arr[count]);
	   }
   	   printf("the array is: ");
   	   for(count=0;count<10;count++)
   	   {
   	   	printf("%d ",arr[count]);
	   }
	   printf("\n");
	   reverse(arr, 10);
	   printf(" the reverse of an array is: ");
	   for(count=0;count<10;count++)
	   {
	   	printf("%d ",arr[count]);
	   }
	   return 0;
   }
