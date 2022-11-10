#include<stdio.h>
#include<conio.h>
main()
{
	int i,count;
	float sum,average,n;
	sum=0;
	printf("Enter the value? \n");
	scanf("%d", &count);
	for (i=1;i<=count;i++)
	{ 
	  scanf("%f", &n);
	  sum+=n;
	}
	printf("\nThe summation of is %f\n",sum);
	average = sum/count;
	printf("\nThe Average value is %f",average);
	getch();
	return 0;
}
