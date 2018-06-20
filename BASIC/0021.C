//PROGRAM TO USE printf() AND puts()
#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20];
	clrscr();
	puts("\n\n ENTER YOUR NAME: \t");
	gets(str);
	//puts("\n YOUR NAME IS %s",str);
	//ERROR
	//puts() IS UNFORMATTED FUNCTION, CAN'T USE FORMAT SPECIFIERS
	puts("\n\n YOUR NAME IS");       //DISPLAYING CONSTANT STRING
	puts(str);                       //DISPLAYING STRING VARIABLE
	printf("DOLLY");
	getch();
}