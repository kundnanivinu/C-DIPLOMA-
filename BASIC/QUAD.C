//PROGRAM TO FIND QUADRANT OF POINT

#include<stdio.h>
#include<conio.h>

void main()
{
	struct point
	{
		int x;
		int y;
		int quad;
	}pt;

	clrscr();

	printf("\n\n ENTER THE LOCATION OF POINT ON X-AXIS:\t");
	scanf("%d",&pt.x);
	printf("\n\n ENTER THE LOCATION OF POINT ON Y-AXIS:\t");
	scanf("%d",&pt.y);
	if(pt.x == 0 && pt.y == 0)
	{
		pt.quad = 0;
		printf("\n\n POINT LIES ON ORIGIN");
	}
	else if(pt.x > 0 && pt.y > 0)
	{
		pt.quad = 1;
		printf("\n\n POINT LIES IN FIRST QUADRANT");
	}
	else if(pt.x < 0 && pt.y > 0)
	{
		pt.quad = 2;
		printf("\n\n POINT LIES IN SECOND QUADRANT");
	}
	else if(pt.x < 0 && pt.y < 0)
	{
		pt.quad = 3;
		printf("\n\n POINT LIES IN THIRD QUADRANT");
	}
	else if(pt.x > 0 && pt.y < 0)
	{
		pt.quad = 4;
		printf("\n\n POINT LIES IN FOURTH QUADRANT");
	}
	else if(pt.x == 0 && pt.y != 0)
	{
		printf("\n\n POINT LIES ON Y-AXIS");
	}
	else if(pt.x != 0 && pt.y == 0)
	{
		printf("\n\n POINT LIES ON X-AXIS");
	}
	else
	{
		printf("\n\n IMPROPER INPUT!!");
	}
	getch();
}