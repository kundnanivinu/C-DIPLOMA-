// PROGRAM TO FIND AREA AND CIRCUMFERENCE OF CIRCLE

#include<stdio.h>
#include<conio.h>

#define PI 3.1416

void main()
{
	float radius;
	float area;
	float circumference;

	clrscr();

	printf("\n\n ENTER THE RADIUS OF CIRCLE:\t");
	scanf("%f",&radius);

	area = PI * radius * radius;
	circumference = 2 * PI * radius;

	printf("\n\n AREA OF CIRCLE IS %.2f",area);
	printf("\n\n CIRCUMFERENCE OF CIRCLE IS %.2f",circumference);

	getch();
}