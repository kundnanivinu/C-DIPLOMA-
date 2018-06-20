//PROGRAM TO DISPLAY HEXADECIMAL, DECIMAL AND OCTAL FORMATS
#include<stdio.h>
#include<conio.h>

void main()
{
	int num=0;
	clrscr();
	printf("\n\n ENTER NUMBER: \t");
	scanf("%d",&num);
	printf("\n\n HEXADECIMAL = %x",num);
	printf("\n\n OCTAL = %o",num);
	printf("\n\n DECIMAL = %d",num);
	getch();
}
