#include<stdio.h>
int main()
{
char string[100];
int i, count=0;
printf("enter the name:");
scanf("%s", &string);
for(i=0; string[i]!='\0'; i++)
{
	count++;
	}
	printf("The number of letters in your name is %d", count);
	return 0;
}
