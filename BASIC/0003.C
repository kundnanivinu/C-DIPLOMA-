//PROGRAM FOR ADDITION OF NUMBERS
#include<stdio.h>
#include<conio.h>

void main()
{
	long int a,b;
	clrscr();
	printf("\n\n ENTER FIRST NUMBER : \t");
	scanf("%ld",&a);
	printf("\n\n ENTER SECOND NUMBER : \t");
	scanf("%ld",&b);
	printf("\n\n\n\n THE SUM OF %ld AND %ld IS %ld",a,b,a+b);
	getch();
}