/* Programmer:Laiba Bint-e-Zia
* Date: 05/12/23
* Descrption:to check max number in a square matrix, and to print sub matrix with max values using filing
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	//maximum intialization
	int n;
	int max=-10000;

	if (argc != 2)
	{
		printf("enter file name\n");
		return 0;
	}


	FILE *fp=fopen(argv[1],"r");

	printf("\nName:Laiba Bint-e-Zia\nRoll Name:23K-0006\n");

	printf("enter the dimesions of square matrix (even value):");
	scanf("%d", &n);

	int mat[n][n];
	int sub[n/2][n/2];
	int subrow=0, subcol=0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			fscanf(fp,"%d,", &mat[i][j]);
			
		}

	}

	for (int i = 0; i < n ; i+=2)
	{
		subcol=0;

		for(int j = 0; j < n; j+=2)
		{
			max=-10000;
			for (int row = i; row < i+2; row++)
			{
				for (int col = j; col < j+2; col++)
				{
					if(mat[row][col]>max){

						max=mat[row][col];

					}
				}
			}
			sub[subrow][subcol]=max;
		subcol++;
		}
	subrow++;
	}

	for (int i = 0; i < n/2; ++i)
	{
		for (int j = 0; j < n/2; ++j)
		{
			printf("%d ", sub[i][j]);
		}
		printf("\n");
	}

	return 0;

}