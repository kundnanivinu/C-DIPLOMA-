//PROGRAM TO FIND AREA OF TRIANGLE

#include<stdio.h>
#include<conio.h>

void main()
{
	int length;
	int breadth;
	float area;

	clrscr();

	printf("\n\n ENTER THE LENGTH OF TRIANGLE:\t");
	scanf("%d",&length);
	printf("\n\n ENTER THE BREADTH OF TRIANGLE:\t");
	scanf("%d",&breadth);

	area = 0.5 * length * breadth;

	printf("\n\n AREA OF TRIANGLE IS %.2f",area);

	getch();
}