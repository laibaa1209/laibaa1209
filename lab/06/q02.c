//programmer:Laiba Zia
//date:3rd october 2023
//Question:Write a program that will generate the Fibonacci series up to 10000. Also find the sum of the generated Fibonacci numbers divisible by 3, 5 or 7 only.
#include<stdio.h>
int main() { //start of funtion main

    int a=1,b=1,c=0,sum=0;
        printf("%d\t",a);
    	printf("%d\t",b);
    	for(c=0;c<10000;) {
    		if(c%3==0 || c%5==0 || c%7==0) {
    			sum=sum+c;
			}
    		a=b;
    		b=c;
    		c=a+b;
    		
    		if(c<10000) {	
    		printf("%d\t",c);
    }
    		
		}
		
		printf("\nsum:%d",sum);
    	
	
	return 0;

} //end of main
