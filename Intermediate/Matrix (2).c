#include<stdio.h>
int main()
{
	int matrix1[2][2], matrix2[2][2], result[2][2], i, j;
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
			result[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			printf("%d ", result[i][j]);
		}printf("\n");
	}
	return 0;
}
