//PROGRAM TO USE scanf() FOR float/double
#include<stdio.h>
#include<conio.h>

void main()
{
	float x,y;
	double p,q;
	clrscr();
	printf("\n\n VALUES OF X AND Y:\t");
	scanf("%f %e",&x,&y);
	printf("\n X:%f \n Y:%f",x,y);
	fflush(stdin);
	printf("\n\n VALUES OF P AND Q:\t");
	scanf("%lf %lf",&p,&q);
	printf("\n P:%lf \n Q:%e",p,q);
	getch();
}