//PROGRAM TO USE CONDITIONAL OPERATOR
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,big;
	clrscr();
	printf("\n\n ENTER THE VALUE OF A:\t");
	scanf("%d",&a);
	printf("\n\n ENTER THE VALUE OF B:\t");
	scanf("%d",&b);
	printf("\n\n ENTER THE VALUE OF C:\t");
	scanf("%d",&c);
	big=(a>b ? (a>c ? 3 : 4) : (b>c ? 6:8));
	printf("\n\n %d",big);
	getch();
}