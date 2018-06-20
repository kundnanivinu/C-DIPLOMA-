//PROGRAM TO USE sprintf() FUNCTION
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch='A',str[20];
	int x=15;
	float y=4.15;
	clrscr();
	printf("\n\n X:%d \t CH:%c \t Y:%f",x,ch,y);
	sprintf(str,"%d %c %f",x,ch,y);
	printf("\n\n %s",str);
	getch();
}