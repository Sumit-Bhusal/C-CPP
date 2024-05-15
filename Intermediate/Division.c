#include<stdio.h>
int main()
{
	int a,b,sum, prod,diff,rem,quo;
	printf("enter two numbers:");
	scanf("%d%d", &a,&b);
	sum=a+b;
	diff=a-b;
	prod=a*b;
	rem=a%b;
	quo=a/b;
	printf("sum=%d\n", sum);
		printf("difference=%d\n", diff);
			printf("product=%d\n", prod);
				printf("remainder=%d\n", rem);
					printf("quotient=%d\n", quo);
	
	return 0;
}

