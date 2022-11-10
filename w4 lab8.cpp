#include<stdio.h>
char name[45];
main()
{
	printf("insert your name and surname :");
	scanf("%s", name); //alos acan use //gets(name);
	puts("Hello");
	puts(name);
	return 0;
}
