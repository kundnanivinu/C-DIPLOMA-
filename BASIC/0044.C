//PROGRAM TO FIND AREA AND PERIMETER OF RECTANGLE
#include<stdio.h>
#include<conio.h>

void main()
{
	float length;
	float breadth;
	float area;
	float perimeter;
	clrscr();
	printf("\n\n ENTER THE LENGTH OF RECTANGLE: \t");
	scanf("%f",&length);
	printf("\n\n ENTER THE BREADTH OF RECTANGLE: \t");
	scanf("%f",&breadth);
	area = length * breadth;
	perimeter = 2 * (length + breadth);
	printf("\n\n AREA OF RECTANGLE IS %f",area);
	printf("\n PERIMETER OF RECTANGLE IS %f",perimeter);
	getch();
}
