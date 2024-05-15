#include <stdio.h>
int main()
{
	
	int n, a,original,rev=0;
	printf("enter a number:");
	scanf("%d", &n);
	original=n;
	while (n>0)
	{
		a=n%10;
		rev=rev*10+a;
		n=n/10;
		
	}
	if(original==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf(" not palindrome");
	}
	
	return 0;
}
