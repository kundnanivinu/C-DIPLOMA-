//PROGRAM TO PRINT SQUARE AND CUBE
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int a;
	int sq;
	int cu;
	int sqrt;
	char ch;
	clrscr();
	printf("\n\n ENTER THE VALUE OF A: \t");
	scanf("%d",&a);
	b = sqrt(a);
	printf("%d IS SQUARE ROOT OF %d",b,a);
	sq = a * a;
	cu = a * a * a;
	printf("\n\n SQUARE IS %d",sq);
	printf("\n\n CUBE IS %d",cu);
	getch();
}
