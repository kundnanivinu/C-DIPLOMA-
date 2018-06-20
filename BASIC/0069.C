//PROGRAM TO PRINT SQUARE OF N NATURAL NUMBERS

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;
	clrscr();
	printf("\n ENTER THE VALUE OF N:\t");
	scanf("%d",&n);
	printf("\n\n NUMBER \t SQUARE \n\n\n\n");
	for(i=1;i<=n;i++)
	{
		printf("\n\n %d \t\t %d",i,i*i);
	}
	getch();
}