#include<stdio.h>
#include<conio.h>
main()
{
	float r, V;
	printf("Enter a radius : ");
	scanf("%f", &r);
	V = 4.0/3.0 * 3.1459 * (r*r*r) ;
	printf("Sphere Volume = %f", V);
	getch();
	return 0;
}

