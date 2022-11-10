#include<stdio.h>
#include<conio.h>
char ans;
main()
{
	printf("Confirm your answer[y/n] : ");
	ans = getch();
	printf("You choose %c \n", ans);
	return 0;
}
