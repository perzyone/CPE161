#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float sum=1;
	for(i=2;i<=100;i=i+2) 
		sum=sum+1.0/(i*i);
		
	printf("sum = %f", sum);
	
	getch();
	return 0;
	
}
