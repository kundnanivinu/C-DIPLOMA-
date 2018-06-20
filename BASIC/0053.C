//PROGRAM TO FIND DIVISION OF STUDENT
#include<stdio.h>
#include<conio.h>

void main()
{
	int perc;
	clrscr();
	printf("\n\n ENTER YOUR PERCENTAGE: \t");
	scanf("%d",&perc);
	if(perc<0 || perc>100)
	{
		printf("\n\n IMPROPER INPUT!!");
	}
	else if(perc>=75)
	{
		printf("\n\n DISTINCTION!!");
	}
	else if(perc>=60)
	{
		printf("\n\n FIRST CLASS!!");
	}
	else if(perc>=50)
	{
		printf("\n\n SECOND CLASS!!");
	}
	else if(perc>=40)
	{
		printf("\n\n PASS CLASS!!");
	}
	else
	{
		printf("\n\n FAIL!!");
	}
	getch();
}
