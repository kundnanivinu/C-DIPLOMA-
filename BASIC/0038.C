//PROGRAM
#include<stdio.h>
#include<conio.h>

void main()
{
	char c1='A',c2='B',c3='C';
	float a=2.5,b=0.005,c=3000;
	clrscr();
	printf("\n\n C1:%c \t C2:%c \t C3:%c",c1,c2,c3);
	printf("\n\n C1:%3c \t C2:%3c \t C3:%3c",c1,c2,c3);
	printf("\n\n A:%3f \t B:%3f \t C:%3f",a,b,c);
	printf("\n\n A:%8.4f \t B:%8.4f \t C:%8.4f",a,b,c);
	printf("\n\n A:%e \t B:%e \t C:%e",a,b,c);
	printf("\n\n A:%12.4e \t B:%12.4e \t C:%12.4e",a,b,c);
	getch();
}