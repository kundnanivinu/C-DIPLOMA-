#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[100];
	int i,length;
	clrscr();
	printf("\n ENTER A STRING: \t");
	scanf("%[^\n]",str);
	length = strlen(str);
	printf("\n\n %d",length);
	getch();
}