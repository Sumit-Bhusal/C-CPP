#include <stdio.h>
int main()
{
	// 0 1 1 2 3 5 8 13
	int a=0;
	int nofterms;
	int b=1;
	int c;
	int n=1;
	printf("enter the number of terms of fibonacci series:");
	scanf("%d", &nofterms);
	printf(" %d %d ", a, b);
	while (n<=(nofterms-2))
	{
	
	c=a+b;
	a=b;
	b=c;
	
	printf("%d ", c);
	n++;
}
	return 0;
}

