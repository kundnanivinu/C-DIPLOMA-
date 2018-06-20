//PROGRAM TO SEE ASCII VALUES
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	char ch;
	textbackground(0);
	clrscr();

	printf("\n\n ENTER A CHARACTER: \t");
	scanf("%c",&ch);
	printf("\n\n ASCII VALUE OF %c IS %d",ch,ch);
	for(i=0; i<255; i++)
	{
		if(i%20==0)
		getch();
		printf("\n %c = %d",i,i);
	}
	getch();
}
