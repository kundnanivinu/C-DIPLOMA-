// PROGRAM TO PRINT SPECIFIC PATTERNS

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,count=1;
	clrscr();
	printf("\n ENTER THE VALUE OF N:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\n");
		for(j=0;j<=i;j++)
		{
			printf("%d \t",i+1);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n\n");
		for(j=0;j<n-i-1;j++)
		{
			printf("\t");
		}
		for(j=0;j<=i;j++)
		{
			printf("%d \t",i+1);
		}
	}
	getch();
}