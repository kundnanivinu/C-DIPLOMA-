//PROGRAM TO PRINT TABLE OF A NUMBER
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	int ch;
	clrscr();
	printf("\n\n ENTER NUMBER TO PRINT ITS TABLE: \t");
	scanf("%d",&ch);
	printf("\n\n TABLE OF %d IS",ch);
	for(i=1; i<11; i++)
	{
		printf("\n\n %d * %d = %d",ch,i,ch*i);
	}
	getch();
}
 