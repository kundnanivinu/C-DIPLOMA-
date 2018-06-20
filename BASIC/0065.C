//PROGRAM TO DISPLAY LIBRARY FINE
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;               //n=number of days the book is returned late
	clrscr();
	printf("\n\n ENTER HOW MANY DAYS LATE DID YOU RETURN THE BOOK?\t");
	scanf("%d",&n);
	fflush(stdin);
	if(n<=0)
	{
		printf("\n\n NO FINE");
	}
	else if(n<=5)
	{
		printf("\n\n FINE IS %d",n);
	}
	else if(n<=15)
	{
		printf("\n\n FINE IS %d",5+((n-5)*2));
	}
	else if(n<=20)
	{
		printf("\n\n FINE IS %d",5+10*2+(n-15)*5);
	}
	else if(n<=30)
	{
		printf("\n\n FINE IS %d",5+10*2+5*5+(n-20)*10);
	}
	else
	{
		printf("\n\n MEMBERSHIP CANCELLED!!");
	}
	getch();
}