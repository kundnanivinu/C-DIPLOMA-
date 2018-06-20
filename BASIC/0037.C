//PROGRAM
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float x=12,y=4,z=8;
	clrscr();
	printf("\n\n X:%f \t Y:%f  \t  Z:%f",x,y,z);
	printf("\n\n X+Y:%f \t X-Z:%f",x+y,x-z);
	printf("\n\n SQUARE ROOT OF X+Y:%f \t ABSOLUTE VALUE OF X-Z:%f",sqrt(x+y),abs(x-z));
	getch();
}