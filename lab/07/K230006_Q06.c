#include<stdio.h> 

int main() {
	
	int i,j,n;
	printf("enter N: ");
	scanf("%d",&n);
	
	int arr[n];
	 
	for(i=0;i<n;i++)
	{
		printf("enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int check[n];
	for(i=0;i<n;i++)
	{ 
	  check[i]=0;
	  int count=0;
	  if(check[i]!=arr[i])	
	  {
	  for(j=0;j<n;j++)
	  {
	  
		if(arr[i]==arr[j])
		{
			count++;
		}
      }
      check[i]=arr[i];
  }
		printf("frequency of %d:%d\n",arr[i], count);
	}
	    
	
	
    return 0;
}
