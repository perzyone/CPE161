#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	x=4;
	y=x--;
	printf(" x = %d \t y = %d \n", x,y);
	x=4;
	y=--x;
	x++; //u can use x++ or x=x+1 for plus 1
	printf(" x = %d \t y = %d \n", x,y);
	getch();
	return 0;
}
