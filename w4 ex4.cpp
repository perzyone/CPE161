#include<stdio.h>
#include<conio.h>
main()
{
	int a, ten, five, coin;
	printf("Enter money for Change coin?: ",a);
	scanf("%d", &a);
	ten=a/10;
	five=a%10/5;
	coin=a%10%5;
	printf("Ten  Bath is %d coins \n",ten);
	printf("five Bath is %d coins \n",five);
	printf("one  Bath is %d coins \n",coin);
	getch();
	return 0;
}
