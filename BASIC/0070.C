//PROGRAM TO DEMONSTRATE NESTED FOR LOOPS

#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,i,j,sum=0;
	clrscr();
	printf("\n ENTER THE VALUE OF N1:\t");
	scanf("%d",&n1);
	printf("\n ENTER THE VALUE OF N2:\t");
	scanf("%d",&n2);
	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n2;j++)
		{
			sum=i+j;
			printf("\n\n I=%d \t J=%d \t SUM=%d",i,j,sum);
		}
	}
	getch();
}