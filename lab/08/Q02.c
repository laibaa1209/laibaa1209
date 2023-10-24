#include<stdio.h>

void Calculate(int num1, int num2, char op)
{
	int sum,sub,multiplication,division;
	switch(op)
	{
		case '+':
			sum=num1+num2;
		        printf("the sum is: %d\n",sum);
		        break;
			case'-':
				sub=num1-num2;
					printf("the difference is: %d\n",sub);
					break;
				case'*':
					multiplication=num1*num2;
						printf("the multiplication is: %d\n",multiplication);
						break;
					case'/':
						division=num1/num2;
						printf("the division is: %d\n",division);
						break;
					
	}
}
int main(){
	int num1,num2;
	char op;
	printf("enter num1: ");
	scanf("%d",&num1);
	printf("enter num2: ");
	scanf("%d",&num2);
	printf("enter the operation: ");
	scanf(" %c",&op);
	Calculate(num1, num2, op);
	return 0;
}
