#include<stdio.h>
#include<conio.h>

float computer_tritangle_area(float base, float height)
{
	float x;
	x=0.5*base*height;
	return(x);                 /// can use return(width*length); or return w*l;
}

main()
{
	float tritangle_area,base,height; // u can use double 
	printf("Enter base =");
	scanf("%f",&base);
	printf("Enter height =");
	scanf("%f",&height);
	tritangle_area=computer_tritangle_area(base,height);
	printf("Ans = %f",tritangle_area);
	getch();
	return 0;
}
