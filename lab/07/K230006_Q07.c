#include<stdio.h>
	int main() {
	
	int count, arrA[2][2], arrB[2][2], arrC[2][2];
	int i,j;
	    for ( i = 0 ; i < 2 ; i++) {
	    	for( j = 0 ; j < 2 ; j++ ) {
	    		
	    		printf("enter elements arrA[%d][%d]: ",i,j);
	    		scanf("%d",&arrA[i][j]);
			}
		} for ( i = 0 ; i < 2 ; i++) {
			for( j = 0 ; j < 2 ; j++) {
				printf("enter elements arrB[%d][%d]: ",i,j);
				scanf("%d",&arrB[i][j]);
			}
		} 
		  for( i = 0 ; i < 2 ; i++) {
		  	for( j = 0 ; j < 2 ; j++) {
		  		arrC[i][j]=((arrA[i*2])+arrB[j])*((arrB[i*2])+arrB[j]);
			  }
		  }
		
		for ( i = 0 ; i < 2 ; i++) {
			for( j = 0 ; j < 2 ; j++) {
				printf("%d ",arrC[i][j]);
				if(j==1) {
					printf("\n");
				}
			}
	}
	return 0;
}
