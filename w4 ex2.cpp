#include<stdio.h>
#include<conio.h>
main()
{
	char name [15];
	char surname [30];
	printf("insert your name?: ");
	gets(name);
	printf("insert your surname?: ");
	gets(surname);
	printf("\n\n Hello %s %s.\n", name, surname);
	getch();
	return 0;
}
