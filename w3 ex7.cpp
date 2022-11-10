#include<stdio.h>
#include<conio.h>
main()
{
	float x=37.0;
	int ten,five,coin;
	ten = (int)x/10; 
	five = (int)x%10/5; //five = ((int)x-(10*ten))/5
	coin = (int)x%10%5; //coin = (int)x-(10*ten)-(5*five)
	printf(" All Change of %f \n", x);
	printf(" Number of ten Bath is %d coins, \n", ten);
	printf(" Number of five Bath is %d coins, \n", five);
	printf(" Number of one Bath is %d coins, \n", coin);
	getch();
	return 0;
}
