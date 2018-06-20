//PROGRAM TO FIND WHETHER TWO NUMBERS ARE EQUAL
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("\n\n ENTER THE VALUE OF A:\t");
	scanf("%d",&a);
	printf("\n\n ENTER THE VALUE OF B:\t");
	scanf("%d",&b);
	if(a==b)
	printf("\n\n A EQUALS TO B");
	else
	printf("\n\n A NOT EQUALS TO B");
	getch();
}