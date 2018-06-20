//PROGRAM TO DISPLAY COLOUR USING SWITCH
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n\n ENTER YOUR CHOICE: \t");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'R':
		case 'r':
		{
			printf("\n\n RED");
			break;
		}
		case 'Y':
		case 'y':
		{
			printf("\n\n YELLOW");
			break;
		}
		case 'B':
		case 'b':
		{
			printf("\n\n BLUE");
			break;
		}
		default:
		{
			printf("\n\n IMPROPER INPUT!!");
		}
	}
	getch();
}
