#include<stdio.h>
#include<conio.h>
int year;
float salary;
main()
{
	printf("Enter your experience and salary :\n");
	scanf("%d %f", &year,&salary);
	printf("You worked for %d years.\n", year);
	printf("You salary is %.2f now. \n", salary); 
	getch();									  
	return 0;
}

//also if u want to put in 1 line use printf("You worked for %d years.\nYou salary is %.2f now. \n", year,salary);
