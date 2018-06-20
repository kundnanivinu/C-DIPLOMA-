//PROGRAM TO DISPLAY DECIMAL,HEXADECIMAL AND OCTAL FORMAT OF NUMBER

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;

	clrscr();

	printf("\n\n ENTER THE NUMBER:\t");
	scanf("%d",&num);
	printf("\n\n NUMBER IN DECIMAL SYSTEM:%d",num);
	printf("\n\n NUMBER IN OCTAL SYSTEM:%#o",num);
	printf("\n\n NUMBER IN HEXADECIMAL SYSTEM:%#x",num);

	getch();
}