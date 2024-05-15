#include<stdio.h>
#include<conio.h>
int main()

{
	char name[50], dob[10], college[20];
	int mob_number;
	puts("Enter your name: \n");
		scanf("%s", &name);
		puts("Enter your date of birth: \n");
		scanf("%s", &dob);
		puts("Enter Your mobile number: \n");
		scanf("%d", &mob_number);
		puts("Enter your college name: \n");
		scanf("%s", college);
		printf("Name: -%s \n DOB:%s \n Mobile No; %d \n Campus; %s", name, dob, mob_number, college);
		getch();
		return 0;
	}
