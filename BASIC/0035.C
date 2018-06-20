//PROGRAM TO KNOW SPECIAL THINGS
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch[20];
	float x=12.7654;
	clrscr();
	printf("\n\n X:%#7.0f \
	\n\n X:%+-7.0f",x,x);
	printf("\n\n ENTER A STRING:\t");
	scanf("%[^\n]",ch);
	printf("\n\n %.12s.",ch);
	getch();
}