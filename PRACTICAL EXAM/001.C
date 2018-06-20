//PROGRAM TO ADD TWO NUMBERS

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1;
	int num2;
	int sum;

	clrscr();

	printf("\n\n ENTER THE FIRST NUMBER:\t");
	scanf("%d",&num1);
	printf("\n\n ENTER THE SECOND NUMBER:\t");
	scanf("%d",&num2);

	sum = num1 + num2;

	printf("\n\n SUM OF %d AND %d IS %d",num1,num2,sum);

	getch();
}