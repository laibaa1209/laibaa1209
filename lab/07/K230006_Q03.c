#include<stdio.h> 
int main() {
	
	int sum = 0, count, n, arr[n]; 
	printf("enter length of array: ");
	scanf("%d",&n);
	printf("enter elements: ");
	for( count = 0; count < n; count++) {
		scanf("%d",&arr[count]);
	} for(count = 0; count < n; count++) {
		sum=sum+arr[count];
	} printf("%d",sum);
	return 0;
}
