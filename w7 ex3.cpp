#include<stdio.h>
#include<conio.h>
main()
{ int a, count=0;
  while (count<10)
  {
  	printf("Enter number:");
  	scanf("%d",&a);
  	if(a==0)
  	{
	  printf("You enter wrong number!\n");
  	  printf("Please enter right number in next time!!!\n");2
  	  break;
	}
	else
	{
		printf("You enter right number\n");
	}
	count++;
  }
  getch();
  return 0;
}
