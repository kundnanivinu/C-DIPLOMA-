//PROGRAM TO FIND AREA AND CIRCUMFERENCE OF CIRCLE
#include<stdio.h>
#include<conio.h>
#define pi 3.14

void main()
{
	float radius;
	float area;
	float circumference;
	clrscr();
	printf("\n\n ENTER THE RADIUS OF CIRCLE: \t");
	scanf("%f",&radius);
	area = pi*radius*radius;
	circumference = 2*pi*radius;
	printf("\n\n AREA OF CIRCLE IS %f",area);
	printf("\n CIRCUMFERENCE OF CIRCLE IS %f",circumference);
	getch();
}
