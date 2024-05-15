#include <stdio.h>
#include <string.h>
int main()
{
	char string[20];
	printf("enter a string:");
	gets(string);
	int len=strlen(string);
	printf("the length of %s is %d", string, len);
	return 0;
}
