//EXCHANGING VALUES OF TWO VARIABLES

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1;
	int num2;
	int temp;

	clrscr();

	printf("\n\n ENTER THE FIRST NUMBER:\t");
	scanf("%d",&num1);
	printf("\n\n ENTER THE SECOND NUMBER:\t");
	scanf("%d",&num2);

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("\n\n\n *****------------AFTER SWAPPING------------*****");
	printf("\n\n NUM1 = %d NUM2 = %d",num1,num2);

	getch();
}