//PROGRAM TO PRINT FACTORIAL OF A NUMBER

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,fact=1,n;
	clrscr();
	printf("\n ENTER THE VALUE OF N:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		 fact*=i;
	}
	printf("\nFACTORIAL OF %d IS %d",n,fact);
	getch();
}


