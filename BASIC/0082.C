#include<stdio.h>
#include<conio.h>

void display(int);
void main()
{
	int num;
	clrscr();
	printf("\n ENTER THE VALUE OF num:\t");
	scanf("%d",&num);
	display(num);
	getch();
}

void display(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n DOLLY");
	}
}