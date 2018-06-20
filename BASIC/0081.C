#include<stdio.h>
#include<conio.h>

void display(void);
void main()
{
	display();
	getch();
}

void display(void)
{
	int n,i;
	clrscr();
	printf("\n ENTER THE VALUE OF n:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n DOLLY");
	}
}