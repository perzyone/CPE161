#include<stdio.h>
#include<conio.h>

float computer_trapezoidal_area(float base1,float base2, float height)
{
	float x;
	x=0.5*(base1+base2)*height;
	return(x);                 /// can use return(width*length); or return w*l;
}

main()
{
	float trapezoidal_area,base1,base2,height; // u can use double 
	printf("Enter base 1 =");
	scanf("%f",&base1);
	printf("Enter base 2 =");
	scanf("%f",&base2);
	printf("Enter height =");
	scanf("%f",&height);
	trapezoidal_area=computer_trapezoidal_area(base1,base2,height);
	printf("Ans = %f",trapezoidal_area);
	getch();
	return 0;
}
