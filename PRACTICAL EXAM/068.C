//REVERSE OF STRING USING POINTERS

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,length;
	char str[100];
	char *sptr;
	sptr = str;
	clrscr();
	printf("\n\n ENTER THE STRING:\t");
	gets(str);
	length = strlen(str);
	printf("\n\n ENTERED STRING IS %s",str);
	printf("\n\n REVERSE OF ENTERED STRING IS  ");
	for(i=length-1;i>=0;i--)
	{
		printf("%c",*(sptr+i));
	}
	getch();
}