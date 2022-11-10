#include<stdio.h>
#include<conio.h>
main()
{
	int a,count=0;
	while (count<10)
	{
		printf("Enter number:");
		scanf("%d",&a);
		if (a==0)
		{
			goto error;
		}
		else {
			printf("you enter right number\n");
		}
		count++;
	}
	error:
	{
	 printf("You enter worng number!\n");
	 printf("Please Enter right in next time number!!!\n");
	}
	getch();
	return 0;
}
