#include <stdio.h>
#include <stdlib.h>
struct info{
	char name[30];
	char address[30];
	char phno[11]; 
	int rollno
	};
int main()
{
	int n,i ;
	struct info stu[20];
	printf("How many students' information you wanna enter?");
	scanf("%d", &n);
	
	for ( i=0;i<n;i++)
	{
	printf("Enter the information of %d employee:\n", i+1);
	printf("\n");
	printf("Name:  ");
	scanf("%s" ,stu[i].name);
	printf("\nAddress:  ");
	scanf("%s",stu[i].address);
	printf("\nPhone Number:  ");
	scanf("%s", stu[i].phno);
	printf("\nRoll Number:  ");
	scanf("%d", &stu[i].rollno);	
		
	}
	printf("\n");
	
	for ( i=0;i<n;i++)
	{
				
	printf("\nThe information of %d empsloyee is:\n",i+1);
	printf("\n");
		printf("Name:  ");
	printf("%s", stu[i].name);
	printf("\nAddress:  ");
	printf("%s", stu[i].address);
	printf("\nPhone Number:  ");
	printf("%s", stu[i].phno);
	printf("\nRoll Number:  ");
	printf("%d", stu[i].rollno);	
	
	    
	}
	
	
	return 0;
}
