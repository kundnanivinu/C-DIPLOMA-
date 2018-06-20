//PROGRAM TO USE DIFFERENT OPERATORS AND TYPE CASTING
#include<stdio.h>
#include<conio.h>

void main()
{
	int x=5,y=3,z=1,a;
	clrscr();
	a=x-- || y++ && --z;
	printf("\n\n A=%d \t X=%d \t Y=%d \t Z=%d",a,x,y,z);
	getch();
}