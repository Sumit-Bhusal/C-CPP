#include <stdio.h>
#include <string.h>
int main()
{
//	char copy[20];
//	// strings in c 
//   char string[]="anushka";
////   strrev(string);
//    strcpy(copy, strrev(string));
//    printf("%s",copy);
	char nof[20];
	char nos[20];
	printf("enter the name of first person:");
	scanf("%s", nof);
	printf("enter the name of second person:");
	scanf("%s", nos);
	int c=strcmp(nof, nos);
	if (c==0)
	{
		printf("equal");
	}
	else
	{
		printf("unequal");
	}
	
	return 0;
}
