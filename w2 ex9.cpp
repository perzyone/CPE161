#include<stdio.h>
#include<conio.h>
main()
{
	char B[100];
	B[0] = 'R';
	B[1] = 'a';
	B[2] = '\0';
	B[3] = 'n';
	B[4] = 'g';
	B[5] = 's';
	B[6] = 'i';
	B[7] = 't';
	
	printf("Your university is %s\n", B);
	printf("Your university is %c %d", B[3], B[3]);
	getch();
	return 0;
}

