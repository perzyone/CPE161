#include<stdio.h>
#include<conio.h>

float computer_rectangle_area(float width, float length)
{
	float x;
	x=width*length;
	return(x);                 /// can use return(width*length); or return w*l;
}

main()
{
	float rectangle_area,width,length; // u can use double 
	printf("Enter width =");
	scanf("%f",&width);
	printf("Enter length =");
	scanf("%f",&length);
	rectangle_area=computer_rectangle_area(width,length);
	printf("Ans = %f",rectangle_area);
	getch();
	return 0;
}
