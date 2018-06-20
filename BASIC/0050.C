//PROGRAM TO CONVERT DISTANCE'S UNITS
#include<stdio.h>
#include<conio.h>

void main()
{
	float dist;
	clrscr();
	printf("\n\n ENTER THE DISTANCE IN KILOMETRES: \t");
	scanf("%f",&dist);
	printf ("\n\n\n IN KILOMETRES:\n\n DISTANCE IS %f km",dist);
	dist = dist * 1000;
	printf ("\n\n\n IN METRES:\n\n DISTANCE IS %f m",dist);
	dist = dist * 100;
	printf ("\n\n\n IN CENTIMETRES:\n\n DISTANCE IS %f cm",dist);
	dist = dist / 2.5;
	printf ("\n\n\n IN INCHES:\n\n DISTANCE IS %f inches",dist);
	dist = (dist / 2.5) / 12;
	printf ("\n\n\n IN FEET:\n\n DISTANCE IS %.2f feet",dist);
	getch();
}
