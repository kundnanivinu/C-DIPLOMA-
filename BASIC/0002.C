//PROGRAM TO DEMONSTRATE DIFFERENCE BETWEEN getch() AND getche()
#include<stdio.h>
#include<conio.h>

void main()
{
	char choice;
	printf("\n\n ENTER A CHARACTER OF YOUR CHOICE : \t");
	choice=getch();
	printf("\n\n\n YOU ENTERED:\t %c",choice);
	printf("\n\n\n\n ENTER A CHARACTER OF YOUR CHOICE : \t");
	choice=getche();
	printf("\n\n\n YOU ENTERED:\t %c",choice);
	getch();
}