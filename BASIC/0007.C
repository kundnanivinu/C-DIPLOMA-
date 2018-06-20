//PROGRAM FOR TYPE PROMOTION AND TYPE DEMOTION
#include<stdio.h>
#include<conio.h>

void main()
{
	float f = 6.35;
	clrscr();
	printf("%f",f);
	printf("\t %d",f);
	f=(int)f;
	printf("\t %f",f);
	getch();
}