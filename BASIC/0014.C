//PROGRAM TO FIND WHETHER ENTERED CHARACTER IS DIGIT
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n\n ENTER A CHARACTER:\t");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9')
	printf("\n\n %c IS A DIGIT",ch);
	else
	printf("\n\n %c IS NOT A DIGIT",ch);
	getch();
}