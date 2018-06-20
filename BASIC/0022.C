//PROGRAM TO USE ARITHMETIC OPERATORS
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("\n\n ENTER FIRST NUMBER:\t");
	scanf("%d",&a);
	printf("\n\n ENTER SECOND NUMBER:\t");
	scanf("%d",&b);
	printf("\n\n %d + %d = %d",a,b,a+b);
	printf("\n\n %d - %d = %d",a,b,a-b);
	printf("\n\n %d * %d = %d",a,b,a*b);
	printf("\n\n %d / %d = %f",a,b,(float)a/b);
	printf("\n\n %d %% %d= %d",a,b,a%b);
	getch();
}