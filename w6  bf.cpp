#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float sum=0;
	for(i=1;i<=100;i=i+1) 
		sum=sum+1.0/(i*i);
		
	printf("sum = %f", sum);
	
	getch();
	return 0;
	
}
