//PROGRAM TO CALCULATE NUMBER OF MONTHS AND DAYS
#include<stdio.h>
#include<conio.h>

void main()
{
	int month,day=155;
	clrscr();
	month=day/30;
	day=day%30;
	printf("\n\n NO. OF MONTHS=%d \t NO. OF DAYS=%d",month,day);
	getch();
}