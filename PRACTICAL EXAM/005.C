//PROGRAM FOR RIGHT AND LEFT JUSTIFICATION

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;

	clrscr();

	printf("\n\n ENTER THE NUMBER:\t");
	scanf("%d",&num);
	printf("\n\n NUMBER WITH LEFT JUSTIFICATION:%-6d",num);
	printf("\n\n NUMBER WITH RIGHT JUSTIFICATION:%6d",num);
	printf("\n\n NUMBER WITH LEADING ZEROES:\t%06d",num);
	printf("\n\n NUMBER WITH TRAILING ZEROES:\t%d",num*100000);

	getch();
}