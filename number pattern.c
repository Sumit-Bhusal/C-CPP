#include<stdio.h>
#include<conio.h>
int main()
{
int n, i, j, c = 1;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
for(j = 1; j <= i; j++)
{
printf("%d ", c);
++c;
}
printf("\n");
}
return 0;
}
