#include<stdio.h>
#include<conio.h>

int display(void);
void main()
{
	int n,i;
	clrscr();
	n=display();
	for(i=0;i<n;i++)
	{
		printf("\n DOLLY");
	}
	getch();
}

int display(void)
{
	int num;
	printf("\n ENTER THE VALUE OF num:\t");
	scanf("%d",&num);
	return num;
}