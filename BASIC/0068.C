//PROGRAM TO PRINT SUM AND AVERAGE OF FIRST N NATURAL NUMBERS

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,sum=0;
	clrscr();
	printf("\n ENTER THE VALUE OF N:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n\n SUM OF %d NUMBERS IS %d",n,sum);
	printf("\n\n AVERAGE OF %d NUMBERS IS %.2f",n,sum/(float)n);
	getch();
}