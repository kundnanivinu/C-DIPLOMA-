//PROGRAM FOR TYPE PROMOTION AND TYPE DEMOTION
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	int val;
	clrscr();
	ch='A'+1;
	val=ch;               //TYPE PROMOTION
	val++;
	ch=val;               //TYPE DEMOTION
	ch++;
	printf("\n\n %d %c %d",ch,ch,val);
	getch();
}