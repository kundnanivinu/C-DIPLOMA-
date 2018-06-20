//PROGRAM TO CONVERT CASE
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n\n ENTER A CHARACTER: \t");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		ch = ch + 32;
		printf("\n\n ALPHABET IN LOWER CASE = %c",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		ch = ch - 32;
		printf("\n\n ALPHABET IN UPPER CASE = %c",ch);
	}
	else
	{
		printf("\n\n IMPROPER INPUT!!");
	}
	getch();
}
