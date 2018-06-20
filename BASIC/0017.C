//PROGRAM TO USE CONDITIONAL OPERATOR
#include<stdio.h>
#include<conio.h>

void main()
{
	int a=1,b=4,c;
	clrscr();
	(a) ?printf("\n\n MS.DOLLY") : printf("\n\n MS.HARCHANDANI");
	a=(!a) ? 3 : 4;
	printf("\n\n A=%d",a);
	c=(a-b) ? a : b;
	printf("\n\n A=%d B=%d C=%d",a,b,c);
	getch();
}