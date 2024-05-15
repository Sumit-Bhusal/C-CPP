#include<stdio.h>
int main()
{
	int matrix1[2][2], matrix2[2][2], sum[2][2],product[2][2], i, j;
	printf("enter the elements of matrix1[i][j]:");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
		printf("enter the elements of matrix2[i][j]:");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
			product[i][j]=matrix1[i][j]*matrix2[i][j];
		}
	}
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++) 
		{
			printf("sum is %d \n",sum[i][j]);
			printf("product is %d\n ",product[i][j]);
		}
		printf("\n");
	}
	return 0;
}

