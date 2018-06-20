//PROGRAM TO DISPLAY CUBE OF NUMBER

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	int cube;

	clrscr();

	printf("\n\n ENTER THE NUMBER:\t");
	scanf("%d",&num);

	cube = num * num * num;

	printf("\n\n CUBE OF %d IS %d",num,cube);

	getch();
}