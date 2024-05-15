#include <stdio.h>
int main()
{
	int i,j,k;
	for (i=1;i<=4;i++)
	{
		k=1;
		for (j=1;j<=7;j++)
		{
			if(j>=i && j<=(8-i) && k)
			{
				printf("%d", i);
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
	
	return 0;
}
