//PROGRAM DEMONSTRATING COMPOUND ASSIGNMENT
#include<stdio.h>
#include<conio.h>

void main()
{
	int x=1,y=1,z=0;
	clrscr();
	x= x= x && y || z;
	printf("\n\n X=%d \t Y=%d \t Z=%d",x,y,z);
	z=x++ - 1;
	printf("\n\n X=%d \t Y=%d \t Z=%d",x,y,z);
	z+=-x++ + ++y;
	printf("\n\n X=%d \t Y=%d \t Z=%d",x,y,z);
	z= x / ++x;
	printf("\n\n X=%d \t Y=%d \t Z=%d",x,y,z);
	x+=y+=z;
	printf("\n\n X=%d \t Y=%d \t Z=%d",x,y,z);
	z= ++x + y++;
	printf("\n\n X=%d \t Y=%d \t Z=%d",x,y,z);
	z= y && x;
	printf("\n\n X=%d \t Y=%d \t Z=%d",x,y,z);
	getch();
}