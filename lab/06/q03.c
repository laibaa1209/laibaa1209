#include<stdio.h>
int main() {
	int num1,num2,i,GCD1,GCD2,LCM1,LCM2;
	printf("enter the first num: ");
	scanf("%d",&num1);
	printf("enter the second num: ");
	scanf("%d",&num2);
		for(i=1;i<=num1;i++) {
			if(num1%i==0) {
				GCD1=i;
			}
		}
		for(i=1;i<=num1;i++) {
			if(num2%i==0) {
				GCD2=i;
			}
		}
		if(GCD1==GCD2) {
			printf("the greatest common divisor is: %d\n",GCD1);
		}
		for(i=2;i<=num1;i++) {
			if(num1%i==0) {
			LCM1=i;
			break;
		}
		}
		for(i=2;i<=num2;i++) {
			if(num2%i==0)
			LCM2=i;
			break;
		}
		if(LCM1==LCM2) {
			printf("the least common multiple is: %d",LCM1);
		}
	return 0;
}
