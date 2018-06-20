//PROGRAM TO USE putchar()
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch='Y';
	clrscr();
	putchar('D');
	putchar('O');
	putchar('L');
	putchar('L');
	putchar(ch);      //PASSING VALUE INDIRECTLY
	getch();
}