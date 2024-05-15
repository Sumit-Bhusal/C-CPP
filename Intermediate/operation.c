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
	printf("sum=%d", sum);
		printf("difference=%d", diff);
			printf("product=%d", prod);
				printf("remainder=%d", rem);
					printf("quotient=%d", quo);
	
	return 0;
}
