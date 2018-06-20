//PROGRAM TO DEMONSTRATE USE OF if (ABSOLUTE VALUE)
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,temp;
	clrscr();
	printf("\n\n ENTER A NUMBER:\t");
	scanf("%d",&n);
	temp=n;
	if(n<0)
	{
		n=-n;
	}
	printf("\n\n ABSOLUTE VALUE OF %d IS %d",temp,n);
	getch();
}