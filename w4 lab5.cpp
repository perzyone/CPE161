#include<stdio.h>
#include<conio.h>
char name[30];
char surname[30];
main()
{
	printf("Enter your name and surname : ");
	scanf("%s %s", name, surname);
	printf("Hello %s %s. \n", name, surname);
	getch();
	return 0;
}
